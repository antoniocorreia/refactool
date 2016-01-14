import re

def est_ref_7(codigo):
    padrao7 = re.search('(.*)return (.*?)(\n+\t*?)#ifdef (.*?)(\n+\t*?)&& (.*?)(\n+\t*?)#else(\n+\t*?)&& (.*?)(\n+\t*?)#endif(\n+\t*?);(.*)',codigo,re.DOTALL)
    if padrao7:        
        return 1 + est_ref_7(padrao7.group(1))
    else:        
        return 0
    
def refactoring_7(codigo):
    padrao7 = re.search('(.*)return (.*?)(\n+\t*?)#ifdef (.*?)(\n+\t*?)&& (.*?)(\n+\t*?)#else(\n+\t*?)&& (.*?)(\n+\t*?)#endif(\n+\t*?);(.*)',codigo,re.DOTALL)
    if padrao7:
        expression_1 = padrao7.group(4).replace('\n','').replace('\t','')
        id_1 = padrao7.group(2).replace('\n','').replace('\t','')
        id_2 = padrao7.group(6).replace('\n','').replace('\t','')
        id_3 = padrao7.group(9).replace('\n','').replace('\t','')

        idnt = padrao7.group(5)
        idnt_dir = padrao7.group(3)
        
        codigo_anterior = padrao7.group(1)
        codigo_restante = padrao7.group(12)

        codigo_transformado = "#ifdef " + expression_1 + idnt + "return " + id_1 + " && " + id_2 + ";"+idnt_dir+"#else"+idnt+"return " + id_1 + " && " + id_3 + ";"+idnt_dir+"#endif" + codigo_restante

        return refactoring_7(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        

