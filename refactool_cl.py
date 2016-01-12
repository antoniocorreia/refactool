#!/usr/bin/python

#
# Criado por Antonio Correia Jan, 2016
#

import sys, getopt
from refactool_core import refactool_core

def help_text():
      print ("Utilizaçao: refactool.py -d <diretorio> -r <refactorings> -t <transformar>\n\n" + \
                "-d\tDiretório do projeto a ser analisado (ex.: C:/usr/projeto)\n" + \
                "-r\tLista com os refactorings a serem analisados (ex.: [1,2,3])\n" + \
                "-t\tIndicador para realizar ou nao as transformaçoes de acordo com a lista de refactorings (ex.: 1 ou 0)")
      
def main(argv):
      diretorio = ''
      refactorings = ''
      transformar = ''
      try:
            opts, args = getopt.getopt(argv,"hd:r:t:",["diretorio=","refactorings=","transformar="])
      except getopt.GetoptError:
            print ('refactool.py -d <diretorio> -r <refactorings> -t <transformar>')
            sys.exit(2)
      for opt, arg in opts:
            if opt == '-h':
               help_text()
               sys.exit()
            elif opt in ("-d", "--dir"):
               diretorio = arg
            elif opt in ("-r", "--refact"):
               refactorings = arg
            elif opt in ("-t", "--transf"):
               transformar = arg

      if diretorio == '':
            help_text()
            sys.exit()

      if refactorings == '':
            refactorings = [1,2,3,4,5,6,7,8,9]
      else:
            refactorings = refactorings.replace('[','').replace(',','').replace(']','')

      if transformar == '':
            transformar = 0

      #chamar principal
      refactool_core(diretorio,refactorings,tranformar)
      #print ('Diretorio "', diretorio)
      #print ('Refactorings "', refactorings)
      #print ('Transformar "', transformar)

if __name__ == "__main__":
      main(sys.argv[1:])
