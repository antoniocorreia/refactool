import re
import time

padrao_tipos_c = "(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed long int|unsigned long int|float|double|long double)"

def est_ref_8(codigo):
    padrao8 = re.search('(.*)' + padrao_tipos_c + '(.*?)\[\](.*?)=(.*?){(.*?),(.*?)#ifdef(.*?),(.*?)#endif(.*)',codigo,re.DOTALL)
    if padrao8:        
        return 1 + est_ref_8(padrao8.group(1))
    else:        
        return 0
    
def refactoring_8(codigo):
    padrao8 = re.search('(.*)' + padrao_tipos_c + '(.*?)\[\](.*?)=(.*?){(.*?),(.*?)#ifdef(.*?),(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao8:
        element_1 = padrao8.group(6).replace('\n','').replace('\t','')
        element_2 = padrao8.group(7).replace('\n','').replace('\t','')
        element_3 = padrao8.group(9).replace('\n','').replace('\t','')
        expression_1 = padrao8.group(8).replace('\n','').replace('\t','')
        array_type = padrao8.group(2)
        array_id = padrao8.group(3)
        codigo_anterior = padrao8.group(1)
        codigo_restante = padrao9.group(10)

        var_timestamp = "ELEMS" + str(time.time()).replace('.','')[-7:]
        
        codigo_transformado = "\n\t#ifdef " + expression_1 + "\n\t\t#define " + var_timestamp + " , " + element_3 + "\n\t#else\n\t\t#define " + var_timestamp + " \"\"\n\t#endif\n\t" + array_type + " " + array_id + "[] = {\n\t\t" + element_1 + ",\n\t\t" + element_2 + "\n\t\t" + var_timestamp + "\n\t" + codigo_restante

        return refactoring_8(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        





