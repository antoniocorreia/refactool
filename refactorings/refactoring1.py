import re
import time

ocorrencias = 0

def est_ref_1(codigo):
    padrao1 = re.search('(.*)if(.*?){(.*?)}(.*?)#ifdef (.*?)else if(.*?){(.*?)}(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao1:
        global ocorrencias
        ocorrencias += 1
        
        return refactoring_1(padrao1.group(1))
    else:        
        return codigo

def refactoring_1(codigo):
    padrao1 = re.search('(.*)if(.*?){(.*?)}(.*?)#ifdef (.*?)else if(.*?){(.*?)}(.*?)#endif(.*)',codigo,re.DOTALL)

    if padrao1:
        condition_1 = padrao1.group(2).replace('\n','').replace('\t','')
        expression_1 = padrao1.group(5).replace('\n','')
        condition_2 = padrao1.group(6).replace('\n','').replace('\t','')
        loc_1 = padrao1.group(3)
        loc_2 = padrao1.group(7)
        codigo_restante = padrao1.group(9)
    
        var_timestamp = "var" + str(int(time.time()))

        codigo_transformado = "int "+ var_timestamp +" = " + condition_1 + ";\n\tif ("+ var_timestamp +"){\n" + loc_1 + "\n\t}\n\t#ifdef " + expression_1 + "\n\t\t if(!("+var_timestamp+") && " + condition_2 + "){\n" + loc_2 + "\n\t\t}\n\t#endif" + codigo_restante

        return refactoring_1(padrao1.group(1)) + codigo_transformado
    else:        
        return codigo
        

#fo = open("teste1.c", "r")
#codigo = fo.read()
#fo.close()

#codigo_transformado = refactoring_1(codigo)
#print (codigo_transformado)

#ft = open("teste1-transformado.c","w")
#ft.write(codigo_transformado)
#ft.close()
