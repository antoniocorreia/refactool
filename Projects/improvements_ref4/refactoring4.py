import re
import uuid

def est_ref_4(codigo):
    padrao4 = re.search('(.*)#ifdef (.*?)(\n+\t*)if (.*?){(\n+\t*)#else(\n+\t*)if (.*?){(\n+\t*)#endif(.*)',codigo,re.DOTALL)
    if padrao4:        
        return 1 + est_ref_4(padrao4.group(1))
    else:        
        return 0
    
def refactoring_4(codigo):
    padrao4 = re.search('(.*)#ifdef (.*?)(\n+\t*)if (.*?){(\n+\t*)#else(\n+\t*)if (.*?){(\n+\t*)#endif(.*)',codigo,re.DOTALL)
    if padrao4:
        expression_1 = padrao4.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao4.group(4).replace('\n','').replace('\t','')
        condition_2 = padrao4.group(7).replace('\n','').replace('\t','')
        codigo_anterior = padrao4.group(1)
        codigo_restante = padrao4.group(9)

        idnt = padrao4.group(3)
        idnt_dir = padrao4.group(5)
        
        var_uuid = "var" + str(uuid.uuid4()).replace('-','')
        
        codigo_transformado = "#ifdef " + expression_1 + idnt + "int " + var_uuid + " = " + condition_1 + ";" + idnt_dir + "#else" + idnt + "int " + var_uuid + " = " + condition_2 + ";" + idnt_dir + "#endif" + idnt_dir + "if(" + var_uuid + "){" + codigo_restante

        return refactoring_4(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        


