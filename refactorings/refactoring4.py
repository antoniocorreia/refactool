import re
import time

def refactoring_4(codigo):
    padrao4 = re.match('(.*)#ifdef (.*?)if (.*?){(.*?)#else(.*?)if (.*?){(.*?)#endif(.*)',codigo,re.DOTALL)
    if padrao4:
        expression_1 = padrao4.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao4.group(3).replace('\n','').replace('\t','')
        condition_2 = padrao4.group(6).replace('\n','').replace('\t','')
        
        var_timestamp = "var" + str(int(time.time()))
        
        codigo_transformado = "#ifdef " + expression_1 + "\n\t\t" + "int " + var_timestamp + " = " + condition_1 + ";\n\t#else\n\t\tint " + var_timestamp + " = " + condition_2 + ";\n\t#endif\n\tif(" + var_timestamp + "){" + padrao4.group(8)

        return refactoring_4(padrao4.group(1)) + codigo_transformado
    else:        
        return codigo
        

