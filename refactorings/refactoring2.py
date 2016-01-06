import re

def refactoring_2(codigo):
    padrao2 = re.search('(.*)#ifdef (.*?)if(.*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao2:
        expression_1 = padrao2.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao2.group(3).replace('\n','').replace('\t','')
        loc_if = padrao2.group(5)
        loc = padrao2.group(6)        
        
        codigo_transformado = 'int test = 1;\n\t#ifdef '  + expression_1 + "\n\t\ttest = " + condition_1 + ";\n\t#endif\n\tif (test) {" + loc_if + "\n\t}\n" + loc

        return refactoring_2(padrao2.group(1)) + codigo_transformado
    else:        
        return codigo
        

fo = open("teste2.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_2(codigo)
print (codigo_transformado)

ft = open("teste2-transformado.c","w")
ft.write(codigo_transformado)
ft.close()
