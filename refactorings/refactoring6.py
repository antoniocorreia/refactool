import re

def refactoring_6(codigo):
    padrao6 = re.match('(.*)if(.*?)#ifdef (.*?)&& (.*?)#endif(.*?){(.*)',codigo,re.DOTALL)
    if padrao6:
        expression_1 = padrao6.group(3).replace('\n','').replace('\t','')
        condition_1 = padrao6.group(2).replace('\n','').replace('\t','')
        condition_2 = padrao6.group(4).replace('\n','').replace('\t','')
        
        codigo_transformado = "bool test = " + condition_1 + ");\n\t#ifdef " + expression_1 + "\n\t\ttest = test && " + condition_2 + ";\n\t#endif\n\tif(test){" + padrao6.group(6)

        return refactoring_6(padrao6.group(1)) + codigo_transformado
    else:
        return codigo
        

fo = open("teste6.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_6(codigo)
print (codigo_transformado)

ft = open("teste6-transformado.c","w")
ft.write(codigo_transformado)
ft.close()

