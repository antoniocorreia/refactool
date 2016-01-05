import re

def refactoring_7(codigo):
    padrao7 = re.match('(.*)return (.*?)#ifdef (.*?)&&(.*?)#else(.*?)&&(.*?)#endif(.*?);(.*)',codigo,re.DOTALL)
    if padrao7:
        expression_1 = padrao7.group(3).replace('\n','').replace('\t','')
        id_1 = padrao7.group(2).replace('\n','').replace('\t','')
        id_2 = padrao7.group(4).replace('\n','').replace('\t','')
        id_3 = padrao7.group(6).replace('\n','').replace('\t','')

        codigo_transformado = "#ifdef " + expression_1 + "\n\t\treturn " + id_1 + " && " + id_2 + ";\n\t#else\n\t\treturn " + id_1 + " && " + id_3 + ";\n\t#endif" + padrao7.group(8)

        return refactoring_7(padrao7.group(1)) + codigo_transformado
    else:        
        return codigo
        

fo = open("teste7.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_7(codigo)
print (codigo_transformado)

ft = open("teste7-transformado.c","w")
ft.write(codigo_transformado)
ft.close()

