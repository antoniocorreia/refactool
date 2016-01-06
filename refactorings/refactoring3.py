import re

def refactoring_3(codigo):
    padrao3 = re.search('(.*)switch(.*?){(.*?)#ifdef (.*?)case (.*?):(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao3:
        var = padrao3.group(2).replace('\n','').replace('\t','').replace(' ','')
        expression_1 = padrao3.group(4).replace('\n','').replace('\t','')
        VALUE = padrao3.group(5).replace('\n','').replace('\t','')
        commands = padrao3.group(6)

        codigo_transformado = "#ifdef " + expression_1 + "\n\t\t#define CASE1 case " + VALUE + ":" + commands + "\n\t#else\n\t\t#define CASE1 \"\"\n\t#endif\n\tswitch " + var + "{\n\t\tCASE1" + padrao3.group(7)

        return refactoring_3(padrao3.group(1)) + codigo_transformado
    else:        
        return codigo
        

fo = open("teste3.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_3(codigo)
print (codigo_transformado)

ft = open("teste3-transformado.c","w")
ft.write(codigo_transformado)
ft.close()
