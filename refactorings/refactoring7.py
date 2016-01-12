import re

def est_ref_7(codigo):
    padrao7 = re.match('(.*)return (.*?)#ifdef (.*?)&&(.*?)#else(.*?)&&(.*?)#endif(.*?);(.*)',codigo,re.DOTALL)
    if padrao7:        
        return 1 + est_ref_7(padrao7.group(1))
    else:        
        return 0
    
def refactoring_7(codigo):
    padrao7 = re.match('(.*)return (.*?)#ifdef (.*?)&&(.*?)#else(.*?)&&(.*?)#endif(.*?);(.*)',codigo,re.DOTALL)
    if padrao7:
        expression_1 = padrao7.group(3).replace('\n','').replace('\t','')
        id_1 = padrao7.group(2).replace('\n','').replace('\t','')
        id_2 = padrao7.group(4).replace('\n','').replace('\t','')
        id_3 = padrao7.group(6).replace('\n','').replace('\t','')
        
        codigo_anterior = padrao7.group(1)
        codigo_restante = padrao7.group(8)

        codigo_transformado = "#ifdef " + expression_1 + "\n\t\treturn " + id_1 + " && " + id_2 + ";\n\t#else\n\t\treturn " + id_1 + " && " + id_3 + ";\n\t#endif" + codigo_restante

        return refactoring_7(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        

