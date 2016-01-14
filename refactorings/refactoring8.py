import re
import uuid

padrao_tipos_c = "(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed long int|unsigned long int|float|double|long double)"

def est_ref_8(codigo):
    padrao8 = re.search('(.*)(\n+\t*?)' + padrao_tipos_c + ' (.*?)\[\] = {(.*?),(.*?)(\n+\t*?)#ifdef(.*?)(\n+\t*?),(.*?)(\n+\t*?)#endif(.*)',codigo,re.DOTALL)
    if padrao8:        
        return 1 + est_ref_8(padrao8.group(1))
    else:        
        return 0
    
def refactoring_8(codigo):
    padrao8 = re.search('(.*)(\n+\t*?)' + padrao_tipos_c + ' (.*?)\[\] = {(.*?),(.*?)(\n+\t*?)#ifdef(.*?)(\n+\t*?),(.*?)(\n+\t*?)#endif(.*)',codigo,re.DOTALL)

    if padrao8:
        element_1 = padrao8.group(5).replace('\n','').replace('\t','')
        element_2 = padrao8.group(6).replace('\n','').replace('\t','')
        element_3 = padrao8.group(10).replace('\n','').replace('\t','')
        expression_1 = padrao8.group(8).replace('\n','').replace('\t','')
        array_type = padrao8.group(3)
        array_id = padrao8.group(4)
        codigo_anterior = padrao8.group(1)
        codigo_restante = padrao8.group(12)

        idnt = padrao8.group(9)
        idnt_dir = padrao8.group(7)
        
        var_uuid = "ELEMS" + str(uuid.uuid4()).replace('-','')
        
        codigo_transformado = idnt_dir + "#ifdef " + expression_1 + idnt +"#define " + var_uuid + " , " + element_3 + idnt_dir +"#else"+idnt+"#define " + var_uuid + " \"\""+idnt_dir+"#endif"+idnt_dir + array_type + " " + array_id + "[] = {"+idnt + element_1 + ","+idnt + element_2 + idnt + var_uuid + codigo_restante

        return refactoring_8(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        





