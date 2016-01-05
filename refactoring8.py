import re

def refactoring_8(codigo):
    padrao8 = re.search('(.*)\n(.*?) (.*?)\[\](.*?)=(.*?){(.*?),(.*?)#ifdef(.*?),(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao8:
        element_1 = padrao8.group(6).replace('\n','').replace('\t','')
        element_2 = padrao8.group(7).replace('\n','').replace('\t','')
        element_3 = padrao8.group(9).replace('\n','').replace('\t','')
        expression_1 = padrao8.group(8).replace('\n','').replace('\t','')
        
        codigo_transformado = "\n\t#ifdef " + expression_1 + "\n\t\t#define ELEMS , " + element_3 + "\n\t#else\n\t\t#define ELEMS \"\"\n\t#endif\n" + padrao8.group(2) + " " + padrao8.group(3) + "[] = {\n\t\t" + element_1 + ",\n\t\t" + element_2 + "\n\t\tELEMS\n\t" + padrao8.group(10)

        return refactoring_8(padrao8.group(1)) + codigo_transformado
    else:        
        return codigo
        

fo = open("teste8.c", "r")
codigo = fo.read()
fo.close()

codigo_transformado = refactoring_8(codigo)
print (codigo_transformado)

ft = open("teste8-transformado.c","w")
ft.write(codigo_transformado)
ft.close()


#Melhorar posicionamento do #ifdef em relação ao array, já que se houver código antes ele vai separar
#dica: listar os tipos de c

