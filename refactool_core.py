
#
# Criado por Antonio Correia Jan, 2016
#

import glob, os 
from datetime import datetime
from refactorings import refactoring1, refactoring2, refactoring3, refactoring4, refactoring5, refactoring6, refactoring7, refactoring8, refactoring9
from util import est_ref

def formata_diretorio(diretorio):
    return diretorio.replace("\\","/")

def log(msg,diretorio):
    fo = open(formata_diretorio(diretorio)+"/refactool_log.txt","a")
    fo.write(datetime.now().strftime('%Y-%m-%d %H:%M:%S') + " " + msg + "\n")
    #fo.write(msg + "\n")
    fo.close()

def refactool_core(diretorio,refactorings,transforma):
    
    #caso diretorio venha vazio assume diretorio de exemplo
    if diretorio == '':
        dir_formatado = formata_diretorio("C:/Users/Antonio/Documents/GitHub/refactool/refactool_example")
    else:
        dir_formatado = formata_diretorio(diretorio)

    dir_transformacoes = dir_formatado + "/refactool-transformacoes"

    #reseta arquivo de log
    print("Preparando o log")
    fo = open(formata_diretorio(diretorio)+"/refactool_log.txt","w")
    fo.close
        
    lista_refac = [0,0,0,0,0,0,0,0,0]

    for i in refactorings:
        if i == 1:
            lista_refac[0] = 1
        elif i == 2:
            lista_refac[1] = 1
        elif i == 3:
            lista_refac[2] = 1
        elif i == 4:
            lista_refac[3] = 1
        elif i == 5:
            lista_refac[4] = 1
        elif i == 6:
            lista_refac[5] = 1
        elif i == 7:
            lista_refac[6] = 1
        elif i == 8:
            lista_refac[7] = 1
        elif i == 9:
            lista_refac[8] = 1
    

    qtd_arquivos = 0
    print("Abrindo diretório")
    os.chdir(dir_formatado)
    for file in glob.glob("*.c"):
        qtd_arquivos = qtd_arquivos + 1

    msg_arquivos = "O projeto tem " + str(qtd_arquivos) + " arquivo(s) .c"
    log(msg_arquivos,dir_formatado)
    print(msg_arquivos)
    
    os.chdir(dir_formatado)
    for file in glob.glob("*.c"):

        #abre arquivo
        print("Lendo arquivo " + file)
        log(file,dir_formatado) 
        fo = open(dir_formatado + "/" + file, "r")
        codigo = fo.read()
        fo.close()

        #estatisticas dos refactorings (log)
        
        lista_qtd_ocorrencias = [0,0,0,0,0,0,0,0,0]
        count = 1
        while (count <= 9):
            
            if lista_refac[count-1]:
                print("Buscando por refactoring " + str(count))
                lista_qtd_ocorrencias[count-1] = est_ref(codigo,count)

                msg_log = "Refactoring "+str(count)+" - " + str(lista_qtd_ocorrencias[count-1]) + " ocorrência(s)"
                print(msg_log)
                log (msg_log,dir_formatado)
            count = count + 1

        
        #aplica transformações
        if transforma:
            print("Aplicando transformações")
            if lista_refac[0] & (lista_qtd_ocorrencias[0] > 0):
               codigo = refactoring1.refactoring_1(codigo)
            if lista_refac[1] & (lista_qtd_ocorrencias[1] > 0):
                codigo = refactoring2.refactoring_2(codigo)
            if lista_refac[2] & (lista_qtd_ocorrencias[2] > 0):
                codigo = refactoring3.refactoring_3(codigo)
            if lista_refac[3] & (lista_qtd_ocorrencias[3] > 0):
                codigo = refactoring4.refactoring_4(codigo)
            if lista_refac[4] & (lista_qtd_ocorrencias[4] > 0):
                codigo = refactoring5.refactoring_5(codigo)
            if lista_refac[5] & (lista_qtd_ocorrencias[5] > 0):
                codigo = refactoring6.refactoring_6(codigo)
            if lista_refac[6] & (lista_qtd_ocorrencias[6] > 0):
                codigo = refactoring7.refactoring_7(codigo)
            if lista_refac[7] & (lista_qtd_ocorrencias[7] > 0):
                codigo = refactoring8.refactoring_8(codigo)
            if lista_refac[8] & (lista_qtd_ocorrencias[8] > 0):
                codigo = refactoring9.refactoring_9(codigo)

            
            if not os.path.exists(dir_transformacoes):
                os.makedirs(dir_transformacoes)

            ft = open(dir_transformacoes + "/" + file,"w")
            ft.write(codigo)
            ft.close()

            log("",dir_formatado)
    
    if transforma:
        msg_log = "Arquivos refatorados e salvos no diretório " + dir_transformacoes
        print(msg_log)
        log(msg_log,dir_formatado)
    
    
  
