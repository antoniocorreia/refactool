import re
import time

def est_ref_5(codigo):
    padrao5 = re.search('(.*)#ifdef([^else]*?)if(.*?){(.*?)}([^#]*?)else(.*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)
    if padrao5:        
        return 1 + est_ref_5(padrao5.group(1))
    else:        
        return 0
    
def refactoring_5(codigo):
    padrao5 = re.search('(.*)#ifdef([^else]*?)if(.*?){(.*?)}([^#]*?)else(.*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao5:
        expression_1 = padrao5.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao5.group(3).replace('\n','').replace('\t','')
        loc_1 = padrao5.group(4)
        loc_2 = padrao5.group(8)
        loc = padrao5.group(9)
        codigo_anterior = padrao5.group(1)
       
        var_timestamp = "var" + str(time.time()).replace('.','')[-7:]
        
        codigo_transformado = "int " + var_timestamp + " = " + condition_1 + ";\n\t#ifdef " + expression_1 + "\n\t\tif(" + var_timestamp + "){\n" + loc_1 + "\n\t\t}\n\t\t" + var_timestamp + " = !(" + var_timestamp + ");\n\t#else\n\t\t" + var_timestamp + " = 1;\n\t#endif\n\tif(" + var_timestamp + "){\n" + loc_2 + "\n\t}\n" + loc

        return refactoring_5(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        


