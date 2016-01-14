import re
import uuid

def est_ref_2(codigo):
    padrao2 = re.search('(.*)#ifdef (.*?)(\n+\t*?)if([^{]*?)(\n+\t*?)#endif(\n+\t*?){(.*?)}(.*)',codigo,re.DOTALL)
    if padrao2:        
        return 1 + est_ref_2(padrao2.group(1))
    else:        
        return 0

def refactoring_2(codigo):
    #padrao2 = re.search('(.*)#ifdef ([^#endif]*?)if([^{]*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)
    padrao2 = re.search('(.*)#ifdef (.*?)(\n+\t*?)if([^{]*?)(\n+\t*?)#endif(\n+\t*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao2:
        expression_1 = padrao2.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao2.group(4).replace('\n','').replace('\t','')
        loc_if = padrao2.group(7)
        codigo_anterior = padrao2.group(1)
        codigo_restante = padrao2.group(8)        

        idnt = padrao2.group(3)
        idnt_dir = padrao2.group(5)
        
        var_uuid = "var" + str(uuid.uuid4()).replace('-','')
        
        codigo_transformado = "int " + var_uuid + " = 1;"+\
								idnt_dir + "#ifdef "  + expression_1 + \
								idnt + var_uuid + " = " + condition_1 + \
								";"+idnt_dir+"#endif"+idnt_dir+\
								"if (" + var_uuid + ") {" + \
								loc_if + "}" + \
								codigo_restante

        return refactoring_2(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        

