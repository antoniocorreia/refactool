import re
import time

def est_ref_6(codigo):
    padrao6 = re.match('(.*)if(.*?)\(([^)]*?)#ifdef (.*?)&& (.*?)#endif(.*?){(.*)',codigo,re.DOTALL)
    if padrao6:        
        return 1 + est_ref_6(padrao6.group(1))
    else:        
        return 0


#todo: operadores de c
def refactoring_6(codigo):
    padrao6 = re.match('(.*)if(.*?)\(([^)]*?)#ifdef (.*?)&& (.*?)#endif(.*?){(.*)',codigo,re.DOTALL)
    if padrao6:
        expression_1 = padrao6.group(4).replace('\n','').replace('\t','')
        condition_1 = padrao6.group(3).replace('\n','').replace('\t','')
        condition_2 = padrao6.group(5).replace('\n','').replace('\t','')

        codigo_restante = padrao6.group(7)
        var_timestamp = "var" + str(time.time()).replace('.','')[-7:]
        
        codigo_transformado = "int " + var_timestamp + " = (" + condition_1 + ");\n\t#ifdef " + expression_1 + "\n\t\t" + var_timestamp + " = " + var_timestamp + " && " + condition_2 + ";\n\t#endif\n\tif(" + var_timestamp + "){" + codigo_restante

        return refactoring_6(padrao6.group(1)) + codigo_transformado
    else:
        return codigo
        
