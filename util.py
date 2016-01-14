import re

#
# Criado por Antonio Correia Jan, 2016
#

#todo: operadores

padrao_tipos_c = "(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed long int|unsigned long int|float|double|long double)"

def est_ref(codigo,ref):
    
    if ref == 1:
        padrao = re.search('(.*)if \((.*?)\){(.*?)}(\n+\t*?)#ifdef (.*?)(\n+\t*?)else if(.*?){(.*?)}(\n+\t*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 2:
        padrao = re.search('(.*)#ifdef (.*?)(\n+\t*?)if([^{]*?)(\n+\t*?)#endif(\n+\t*?){(.*?)}(.*)',codigo,re.DOTALL)
    elif ref == 3:
        padrao = re.search('(.*)switch(.*?){(\n+\t*?)#ifdef (.*?)(\n+\t*?)case (.*?):(.*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 4:
        padrao = re.search('(.*)#ifdef (.*?)(\n+\t*?)if (.*?){(\n+\t*?)#else(\n+\t*)if (.*?){(\n+\t*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 5:
        padrao = re.search('(.*)#ifdef (.*?)(\n+\t*?)if(.*?){(.*?)}([^#]*?)else(\n+\t*?)#endif(\n+\t*?){(.*?)}(.*)',codigo,re.DOTALL)
    elif ref == 6:
        padrao = re.search('(.*)if \(([^)]*?)(\n+\t*?)#ifdef (.*?)(\n+\t*?)&& (.*?)(\n+\t*?)#endif(\n+\t*?)\){(.*)',codigo,re.DOTALL)
    elif ref == 7:
        padrao = re.search('(.*)return (.*?)(\n+\t*?)#ifdef (.*?)(\n+\t*?)&& (.*?)(\n+\t*?)#else(\n+\t*?)&& (.*?)(\n+\t*?)#endif(\n+\t*?);(.*)',codigo,re.DOTALL)
    elif ref == 8:
        padrao = re.search('(.*)(\n+\t*?)' + padrao_tipos_c + ' (.*?)\[\] = {(.*?),(.*?)(\n+\t*?)#ifdef(.*?)(\n+\t*?),(.*?)(\n+\t*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 9:
        padrao = re.search('(.*)(\n+\t*?)' + padrao_tipos_c + ' (.*?)\((\n+\t*?)#ifdef (.*?)(\n+\t*?)' + padrao_tipos_c + \
                        ' (.*?)(\n+\t*?)#endif(\n+\t*?)\){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao:        
        return 1 + est_ref(padrao.group(1),ref)
    else:        
        return 0
    




