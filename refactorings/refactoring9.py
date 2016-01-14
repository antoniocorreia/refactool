import re
import uuid

padrao_tipos_c = "(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed long int|unsigned long int|float|double|long double)"

def est_ref_9(codigo):
    padrao9 = re.search('(.*)(\n+\t*?)' + padrao_tipos_c + ' (.*?)\((\n+\t*?)#ifdef (.*?)(\n+\t*?)' + padrao_tipos_c + \
                        ' (.*?)(\n+\t*?)#endif(\n+\t*?)\){(.*?)}(.*)',codigo,re.DOTALL)
    if padrao9:        
        return 1 + est_ref_9(padrao9.group(1))
    else:        
        return 0
    


def refactoring_9(codigo):
    padrao9 = re.search('(.*)(\n+\t*?)' + padrao_tipos_c + ' (.*?)\((\n+\t*?)#ifdef (.*?)(\n+\t*?)' + padrao_tipos_c + \
                        ' (.*?)(\n+\t*?)#endif(\n+\t*?)\){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao9:
        func_type = padrao9.group(3)
        func_name = padrao9.group(4)
        expression_1 = padrao9.group(6)
        param_type = padrao9.group(8)
        param_id = padrao9.group(9)
        loc_func = padrao9.group(12)
        
        idnt = padrao9.group(7)
        idnt_dir = padrao9.group(2)
        
        var_uuid = "PARAM" + str(uuid.uuid4()).replace('-','')

        codigo_anterior = padrao9.group(1)
        codigo_restante = padrao9.group(13)
        
        codigo_transformado = "#ifdef " + expression_1 + idnt + "#define " + var_uuid + " " + param_type + " " + param_id + idnt_dir+"#else"+idnt+"#define " + var_uuid + " \"\""+idnt_dir+"#endif"+idnt_dir + func_type + " " + func_name + "(" + var_uuid + "){" + loc_func + "}" + codigo_restante

        return refactoring_9(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        


