import re
import uuid

def est_ref_1(codigo):
    padrao1 = re.search('(.*)if \((.*?)\){(.*?)}(\n+\t*?)#ifdef (.*?)(\n+\t*?)else if(.*?){(.*?)}(\n+\t*?)#endif(.*)',codigo,re.DOTALL)
    if padrao1:        
        return 1 + est_ref_1(padrao1.group(1))
    else:        
        return 0

def refactoring_1(codigo):
    #padrao1 = re.search('(.*)if(.*?){(.*?)}(.*?)#ifdef (.*?)else if(.*?){(.*?)}(.*?)#endif(.*)',codigo,re.DOTALL)
    padrao1 = re.search('(.*)if \((.*?)\){(.*?)}(\n+\t*?)#ifdef (.*?)(\n+\t*?)else if(.*?){(.*?)}(\n+\t*?)#endif(.*)',codigo,re.DOTALL)

    if padrao1:
        condition_1 = "("+padrao1.group(2)+")"
        expression_1 = padrao1.group(5).replace('\n','')
        condition_2 = padrao1.group(7).replace('\n','').replace('\t','')
        loc_1 = padrao1.group(3)
        loc_2 = padrao1.group(8)
        codigo_anterior = padrao1.group(1)
        codigo_restante = padrao1.group(10)
    
        idnt = padrao1.group(6)
        idnt_dir = padrao1.group(4)
        
        var_uuid = "var" + str(uuid.uuid4()).replace('-','')

        codigo_transformado = "int "+ var_uuid +" = " + condition_1 + ";" + idnt_dir + "if ("+ var_uuid +"){" + loc_1 + "}"+idnt_dir+"#ifdef " + expression_1 + idnt +"if(!("+var_uuid+") && " + condition_2 + "){" + loc_2 + "}"+idnt_dir+"#endif" + codigo_restante

        return refactoring_1(codigo_anterior) + codigo_transformado
    else:        
        return codigo



