import re

padrao_tipos_c = "(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed ling int|unsigned long int|float|double|long double)"

def refactoring_9(codigo):
    padrao9 = re.search('(.*)' + padrao_tipos_c + '(.*?)\((.*?)#ifdef (.*?)' + padrao_tipos_c +' (.*?)#endif(.*?)\)(.*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao9:
        func_type = padrao9.group(2)
        func_name = padrao9.group(3)
        param_type = padrao9.group(6)
        param_id = padrao9.group(7)
        loc_func = padrao9.group(10)
        expression_1 = padrao9.group(5)

        codigo_anterior = padrao9.group(1)
        codigo_restante = padrao9.group(11)
        
        codigo_transformado = "#ifdef " + expression_1 + "\n\t#define PARAM " + param_type + " " + param_id + "\n#else\n\t#define PARAM \"\"\n#endif\n" + func_type + " " + func_name + "(PARAM){\n\t" + loc_func + "\n}\n" + codigo_restante

        return refactoring_9(codigo_anterior) + codigo_transformado
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
