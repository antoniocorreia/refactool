import re
import uuid

def est_ref_3(codigo):
    padrao3 = re.search('(.*)switch(.*?){(\n+\t*?)#ifdef (.*?)(\n+\t*?)case (.*?):(.*?)#endif(.*)',codigo,re.DOTALL)
    if padrao3:        
        return 1 + est_ref_3(padrao3.group(1))
    else:        
        return 0
    
def refactoring_3(codigo):
    padrao3 = re.search('(.*)switch(.*?){(\n+\t*?)#ifdef (.*?)(\n+\t*?)case (.*?):(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao3:
        var = padrao3.group(2).replace('\n','').replace('\t','').replace(' ','')
        expression_1 = padrao3.group(4).replace('\n','').replace('\t','')
        VALUE = padrao3.group(6).replace('\n','').replace('\t','')
        commands = padrao3.group(7).replace('\n',' ').replace('\t',' ')
        codigo_anterior =  padrao3.group(1)
        codigo_restante = padrao3.group(8)

        idnt = padrao3.group(5)
        idnt_dir = padrao3.group(3)
        
        var_uuid = "CASE" + str(uuid.uuid4()).replace('-','')
        
        codigo_transformado = "#ifdef " + expression_1 + idnt + "#define " + var_uuid + " case " + VALUE + ":" + commands + idnt_dir +"#else" + idnt + "#define " + var_uuid + " \"\"" + idnt_dir + "#endif"+ idnt_dir +"switch " + var + "{" + idnt + var_uuid + codigo_restante

        return refactoring_3(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        

