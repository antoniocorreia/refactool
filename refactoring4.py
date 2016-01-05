import re

def refactoring_4(codigo):
    padrao4 = re.match('(.*)#ifdef (.*?)if (.*?){(.*?)#else(.*?)if (.*?){(.*?)#endif(.*)',codigo,re.DOTALL)
    if padrao4:
        expression_1 = padrao4.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao4.group(3).replace('\n','').replace('\t','')
        condition_2 = padrao4.group(6).replace('\n','').replace('\t','')
        

        codigo_transformado = "#ifdef " + expression_1 + "\n\t\t" + "int test = " + condition_1 + ";\n\t#else\n\t\tint test = " + condition_2 + ";\n\t#endif\n\tif(test){" + padrao4.group(8)

        return refactoring_4(padrao4.group(1)) + codigo_transformado
    else:        
        return codigo
        

fo = open("teste4.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_4(codigo)
print (codigo_transformado)

ft = open("teste4-transformado.c","w")
ft.write(codigo_transformado)
ft.close()
