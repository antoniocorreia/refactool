import re
import uuid

def est_ref_6(codigo):
    padrao6 = re.search('(.*)if \(([^)]*?)(\n+\t*?)#ifdef (.*?)(\n+\t*?)&& (.*?)(\n+\t*?)#endif(\n+\t*?)\){(.*)',codigo,re.DOTALL)
    if padrao6:        
        return 1 + est_ref_6(padrao6.group(1))
    else:        
        return 0


#todo: operadores de c
def refactoring_6(codigo):
    padrao6 = re.search('(.*)if \(([^)]*?)(\n+\t*?)#ifdef (.*?)(\n+\t*?)&& (.*?)(\n+\t*?)#endif(\n+\t*?)\){(.*)',codigo,re.DOTALL)
    if padrao6:
        expression_1 = padrao6.group(4).replace('\n','').replace('\t','')
        condition_1 = padrao6.group(2).replace('\n','').replace('\t','')
        condition_2 = padrao6.group(6).replace('\n','').replace('\t','')
        
        codigo_anterior = padrao6.group(1)
        codigo_restante = padrao6.group(9)

        idnt = padrao6.group(5)
        idnt_dir = padrao6.group(7)
        
        var_uuid = "var" + str(uuid.uuid4()).replace('-','')
        
        codigo_transformado = "int " + var_uuid + " = (" + condition_1 + ");"+idnt_dir+"#ifdef " + expression_1 + idnt + var_uuid + " = " + var_uuid + " && " + condition_2 + ";"+idnt_dir+"#endif"+idnt_dir+"if(" + var_uuid + "){" + codigo_restante

        return refactoring_6(codigo_anterior) + codigo_transformado
    else:
        return codigo
        
