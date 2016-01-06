import re

def refactoring_5(codigo):
    padrao5 = re.search('(.*)#ifdef (.*?)if(.*?){(.*?)}(.*?)else(.*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao5:
        expression_1 = padrao5.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao5.group(3).replace('\n','').replace('\t','')
        loc_1 = padrao5.group(4)
        loc_2 = padrao5.group(8)
        loc = padrao5.group(9)
        
        codigo_transformado = "int test = " + condition_1 + ";\n\t#ifdef " + expression_1 + "\n\t\tif(test){\n" + loc_1 + "\n\t\t}\n\t\ttest = !(test);\n\t#else\n\t\ttest = 1;\n\t#endif\n\tif(test){\n" + loc_2 + "\n\t}\n" + loc

        return refactoring_5(padrao5.group(1)) + codigo_transformado
    else:        
        return codigo
        

fo = open("teste5.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_5(codigo)
print (codigo_transformado)

ft = open("teste5-transformado.c","w")
ft.write(codigo_transformado)
ft.close()
