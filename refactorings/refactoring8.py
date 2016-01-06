import re

padrao_tipos_c = "(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed ling int|unsigned long int|float|double|long double)"

def refactoring_8(codigo):
    padrao8 = re.search('(.*)' + padrao_tipos_c + '(.*?)\[\](.*?)=(.*?){(.*?),(.*?)#ifdef(.*?),(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao8:
        element_1 = padrao8.group(6).replace('\n','').replace('\t','')
        element_2 = padrao8.group(7).replace('\n','').replace('\t','')
        element_3 = padrao8.group(9).replace('\n','').replace('\t','')
        expression_1 = padrao8.group(8).replace('\n','').replace('\t','')
        array_type = padrao8.group(2)
        array_id = padrao8.group(3)
        
        codigo_transformado = "\n\t#ifdef " + expression_1 + "\n\t\t#define ELEMS , " + element_3 + "\n\t#else\n\t\t#define ELEMS \"\"\n\t#endif\n\t" + array_type + " " + array_id + "[] = {\n\t\t" + element_1 + ",\n\t\t" + element_2 + "\n\t\tELEMS\n\t" + padrao8.group(10)

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



