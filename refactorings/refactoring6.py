import re
import time

def refactoring_6(codigo):
    padrao6 = re.match('(.*)if(.*?)#ifdef (.*?)&& (.*?)#endif(.*?){(.*)',codigo,re.DOTALL)
    if padrao6:
        expression_1 = padrao6.group(3).replace('\n','').replace('\t','')
        condition_1 = padrao6.group(2).replace('\n','').replace('\t','')
        condition_2 = padrao6.group(4).replace('\n','').replace('\t','')

        var_timestamp = "var" + str(int(time.time()))
        
        codigo_transformado = "int " + var_timestamp + " = " + condition_1 + ");\n\t#ifdef " + expression_1 + "\n\t\t" + var_timestamp + " = " + var_timestamp + " && " + condition_2 + ";\n\t#endif\n\tif(" + var_timestamp + "){" + padrao6.group(6)

        return refactoring_6(padrao6.group(1)) + codigo_transformado
    else:
        return codigo
        

