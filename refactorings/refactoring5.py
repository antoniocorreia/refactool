import re
import uuid

def est_ref_5(codigo):
    padrao5 = re.search('(.*)#ifdef (.*?)(\n+\t*?)if(.*?){(.*?)}([^#]*?)else(\n+\t*?)#endif(\n+\t*?){(.*?)}(.*)',codigo,re.DOTALL)
    if padrao5:        
        return 1 + est_ref_5(padrao5.group(1))
    else:        
        return 0
    
def refactoring_5(codigo):
    padrao5 = re.search('(.*)#ifdef (.*?)(\n+\t*?)if(.*?){(.*?)}([^#]*?)else(\n+\t*?)#endif(\n+\t*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao5:
        expression_1 = padrao5.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao5.group(4).replace('\n','').replace('\t','')
        loc_1 = padrao5.group(5)
        loc_2 = padrao5.group(9)
        
        codigo_anterior = padrao5.group(1)
        codigo_restante = padrao5.group(10)
        
        idnt = padrao5.group(3)
        idnt_dir = padrao5.group(7)
        
        var_uuid = "var" + str(uuid.uuid4()).replace('-','')
        
        codigo_transformado = "int " + var_uuid + " = " + condition_1 + ";"+idnt_dir+"#ifdef " + expression_1 + idnt +"if(" + var_uuid + "){" + loc_1 + "}" + idnt + var_uuid + " = !(" + var_uuid + ");"+idnt_dir+"#else"+idnt + var_uuid + " = 1;"+idnt_dir+"#endif"+idnt_dir+"if(" + var_uuid + "){" + loc_2 + "}" + codigo_restante

        return refactoring_5(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        


