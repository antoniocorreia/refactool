import re
import time

def est_ref_3(codigo):
    padrao3 = re.search('(.*)switch(.*?){(.*?)#ifdef (.*?)case (.*?):(.*?)#endif(.*)',codigo,re.DOTALL)
    if padrao3:        
        return 1 + est_ref_3(padrao3.group(1))
    else:        
        return 0
    
def refactoring_3(codigo):
    padrao3 = re.search('(.*)switch(.*?){(.*?)#ifdef (.*?)case (.*?):(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao3:
        var = padrao3.group(2).replace('\n','').replace('\t','').replace(' ','')
        expression_1 = padrao3.group(4).replace('\n','').replace('\t','')
        VALUE = padrao3.group(5).replace('\n','').replace('\t','')
        commands = padrao3.group(6)

        var_timestamp = "VAR" + str(time.time()).replace('.','')[-7:]
        
        codigo_transformado = "#ifdef " + expression_1 + "\n\t\t#define " + var_timestamp + " case " + VALUE + ":" + commands + "\n\t#else\n\t\t#define " + var_timestamp + " \"\"\n\t#endif\n\tswitch " + var + "{\n\t\t" + var_timestamp + "\n" + padrao3.group(7)

        return refactoring_3(padrao3.group(1)) + codigo_transformado
    else:        
        return codigo
        

