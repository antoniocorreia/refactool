import re

#
# Criado por Antonio Correia Jan, 2016
#

#todo: operadores

padrao_tipos_c = "(int|void|char|unsigned char|signed char|unsigned int|signed int|short int|unsigned short int|signed short int|long int|signed ling int|unsigned long int|float|double|long double)"

def est_ref(codigo,ref):

    if ref == 1:
        padrao = re.search('(.*)if(.*?){(.*?)}(.*?)#ifdef (.*?)else if(.*?){(.*?)}(.*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 2:
        padrao = re.search('(.*)#ifdef ([^#endif]*?)if([^{]*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)
    elif ref == 3:
        padrao = re.search('(.*)switch(.*?){(.*?)#ifdef (.*?)case (.*?):(.*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 4:
        padrao = re.match('(.*)#ifdef (.*?)if (.*?){(.*?)#else(.*?)if (.*?){(.*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 5:
        padrao = re.search('(.*)#ifdef([^else]*?)if(.*?){(.*?)}([^#]*?)else(.*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)
    elif ref == 6:
        padrao = re.match('(.*)if(.*?)\(([^)]*?)#ifdef (.*?)&& (.*?)#endif(.*?){(.*)',codigo,re.DOTALL)
    elif ref == 7:
        padrao = re.match('(.*)return (.*?)#ifdef (.*?)&&(.*?)#else(.*?)&&(.*?)#endif(.*?);(.*)',codigo,re.DOTALL)
    elif ref == 8:
        padrao = re.search('(.*)' + padrao_tipos_c + '(.*?)\[\](.*?)=(.*?){(.*?),(.*?)#ifdef(.*?),(.*?)#endif(.*)',codigo,re.DOTALL)
    elif ref == 9:
        padrao = re.search('(.*)' + padrao_tipos_c + '(.*?)\((.*?)#ifdef (.*?)' + padrao_tipos_c +' (.*?)#endif(.*?)\)(.*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao:        
        return 1 + est_ref(padrao.group(1),ref)
    else:        
        return 0
    




