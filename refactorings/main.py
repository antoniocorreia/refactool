import glob, os, refactoring1, refactoring2, refactoring3, refactoring4, refactoring5, refactoring6, refactoring7, refactoring8, refactoring9

from datetime import datetime
from refactoring1 import est_ref_1, refactoring_1
from refactoring2 import refactoring_2
from util import est_ref

def formata_diretorio(diretorio):
    return diretorio.replace("\\","/")

def log(msg):
    fo = open(formata_diretorio("C:/Users/Antonio/Documents/GitHub/refactool/refactool-examples")+"/refactool_log.txt","a")
    fo.write(datetime.now().strftime('%Y-%m-%d %H:%M:%S') + " " + msg + "\n");
    fo.close()

def main():
    log("==================================================================")
    transforma = True
    dir_formatado = formata_diretorio("C:/Users/Antonio/Documents/GitHub/refactool/refactool-examples")
    ref1 = 1
    ref2 = 1
    ref3 = 0
    ref4 = 0
    ref5 = 0
    ref6 = 0
    ref7 = 0
    ref8 = 0
    ref9 = 0

    #O projeto tem n arquivo(s) .c
    
    os.chdir(dir_formatado)
    for file in glob.glob("*.c"):

        #abre arquivo
        log(file) 
        fo = open(dir_formatado + "/" + file, "r")
        codigo = fo.read()
        fo.close()

        #estatisticas dos refactorings (log)
        count = 1
        while (count <= 9):
            log ("Refactoring "+str(count)+" - " + str(est_ref(codigo,count)) + " ocorrência(s)")
            count = count + 1
            
        #aplica transformações
        if transforma:
            if ref1:
                #todo: considerar situações em que não existem
                #refactorings desse tipo, não salvar arquivo em
                #diretório de transformações
                codigo = refactoring_1(codigo)
            if ref2:
                codigo = refactoring_2(codigo)
            if ref3:
                codigo = refactoring_3(codigo)
            if ref4:
                codigo = refactoring_4(codigo)
            if ref5:
                codigo = refactoring_5(codigo)
            if ref6:
                codigo = refactoring_6(codigo)
            if ref7:
                codigo = refactoring_7(codigo)
            if ref8:
                codigo = refactoring_8(codigo)
            if ref9:
                codigo = refactoring_9(codigo)

            dir_transformacoes = dir_formatado + "/refactool-transformacoes"
            if not os.path.exists(dir_transformacoes):
                os.makedirs(dir_transformacoes)

            ft = open(dir_transformacoes + "/" + file,"w")
            ft.write(codigo)
            ft.close()

            log("")

    log("Arquivos refatorados e salvos no diretório " + dir_transformacoes)
  
