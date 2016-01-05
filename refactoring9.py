import re

def refactoring_9(codigo):
    #para chamadas de funções a ER deve considerar todos os tipos
    #todo: corrigir quando esta com duas funções (ex main)
    padrao9 = re.search('(.*)(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed ling int|unsigned long int|float|double|long double) (.*?)\((.*?)#ifdef (.*?)\n(.*?)#endif(.*?)\){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao9:
        func_type = padrao9.group(2)
        func_name = padrao9.group(3)
        param = padrao9.group(6)
        loc_func = padrao9.group(8)
        expression_1 = padrao9.group(5)
        
        codigo_transformado = "\t#ifdef " + expression_1 + "\n\t\t#define PARAM " + param + "\n\t#else\n\t\t#define PARAM \"\"\n\t#endif\n\t" + func_type + " " + func_name + "(PARAM){\n\t" + loc_func + "\n\t}\n" + padrao9.group(9)

        return refactoring_9(padrao9.group(1)) + codigo_transformado
    else:        
        return codigo
        

fo = open("teste9.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_9(codigo)
print (codigo_transformado)

ft = open("teste9-transformado.c","w")
ft.write(codigo_transformado)
ft.close()
