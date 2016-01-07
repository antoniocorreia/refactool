import glob, os, refactoring1, refactoring2, refactoring3, refactoring4, refactoring5, refactoring6, refactoring7, refactoring8, refactoring9

from datetime import datetime
from refactoring1 import est_ref_1, refactoring_1, ocorrencias

def formata_diretorio(diretorio):
    return diretorio.replace("\\","/")

def log(msg):
    fo = open(formata_diretorio("C:/Users/Antonio/Documents/GitHub/refactool/refactool-examples")+"/refactool_log.txt","a")
    fo.write("\n" + datetime.now().strftime('%Y-%m-%d %H:%M:%S') + " " + msg);
    fo.close()

class Counter(object) :
    def __init__(self, fun) :
        self._fun = fun
        self.counter=0
    def __call__(self,*args, **kwargs) :
        self.counter += 1
        return self._fun(*args, **kwargs)

def main():
    transforma = True
    dir_formatado = formata_diretorio("C:/Users/Antonio/Documents/GitHub/refactool/refactool-examples")
    ref1 = 1
    ref2 = 0
    ref3 = 0
    ref4 = 0
    ref5 = 0
    ref6 = 0
    ref7 = 0
    ref8 = 0
    ref9 = 0

    os.chdir(dir_formatado)
    for file in glob.glob("*.c"):
        log(file)
        #abre arquivo
        fo = open(dir_formatado + "/" + file, "r")
        codigo = fo.read()
        fo.close()
        #estatisticas dos refactorings (log)
        
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
             
  
