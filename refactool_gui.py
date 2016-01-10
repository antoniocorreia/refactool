# -*- coding: utf-8 -*-

#
# Criado por Antonio Correia Jan, 2016
#

from PyQt4 import QtCore, QtGui
import webbrowser
from refactool_core import refactool_core

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_Refactool(object):
    
    def executar(self):
        if self.diretorio.text() == '':
            QtGui.QMessageBox.warning(self.centralwidget, "Selecione um diretório",
                    "Não há diretório selecionado.",
                    QtGui.QMessageBox.Ok, QtGui.QMessageBox.NoButton,
                    QtGui.QMessageBox.NoButton)
            return
                                    
        refactorings = []
        if self.cbRef1.isChecked():
            refactorings.append(1)
        if self.cbRef2.isChecked():
            refactorings.append(2)
        if self.cbRef3.isChecked():
            refactorings.append(3)
        if self.cbRef4.isChecked():
            refactorings.append(4)
        if self.cbRef5.isChecked():
            refactorings.append(5)
        if self.cbRef6.isChecked():
            refactorings.append(6)
        if self.cbRef7.isChecked():
            refactorings.append(7)
        if self.cbRef8.isChecked():
            refactorings.append(8)
        if self.cbRef9.isChecked():
            refactorings.append(9)

        if refactorings == []:
            QtGui.QMessageBox.warning(self.centralwidget, "Selecione ao menos um refactoring",
                    "Não há nenhum refactoring selecionado.",
                    QtGui.QMessageBox.Ok, QtGui.QMessageBox.NoButton,
                    QtGui.QMessageBox.NoButton)
            return
            
        refactool_core(self.diretorio.text(),refactorings,self.cbTransformar.isChecked())
        fo = open(self.diretorio.text() + "/refactool_log.txt","r")
        detalhes_log = fo.read()
        fo.close
        
        msg = QtGui.QMessageBox()
        
        msg.setIcon(QtGui.QMessageBox.Information)
        msg.setWindowTitle("Refactool")
        msg.setText("Execução finalizada")
        msg.setInformativeText("Para visualizar o log abra o arquivo de log (refactool_log.txt) ou expanda os detalhes abaixo")
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(_fromUtf8("1452113474_arrow_cycle.ico")), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        msg.setWindowIcon(icon)
        msg.setDetailedText(detalhes_log)
        msg.setStandardButtons(QtGui.QMessageBox.Ok)
        #todo: aumentar tamanho da janela para melhor visualização do log
        retval = msg.exec_()
        
    
    def buscar_diretorio(self):
        diretorio = QtGui.QFileDialog.getExistingDirectory()
        self.diretorio.setText(_translate("Refactool", diretorio, None))

    def github(self):
        webbrowser.open('https://github.com/antoniocorreia/refactool')
    
    def sobre(self):
        QtGui.QMessageBox.about(self.centralwidget,"Refactool","Ferramenta de refactoring e transformação de programas," + \
                                "que receberá como entrada o diretório de um sistema (possivelmente) contendo anotações não disciplinadas, "+\
                                "os refactorins do catálogo apresentado em A catalogue of refactorings to remove incomplete annotations" + \
                                "de F Medeiros, M Ribeiro, R Gheyi, B Fonseca, mais uma indicação para transformação ou não dos arquivos," + \
                                "e produzirá como saída um arquivo de log refactool_log contendo estatísticas sobre os refactorings selecionados e opcionalmente o código" +\
                                "do sistema com todas as anotações disciplinadas no subdiretório refactool_transformacoes. São utilizadas expressões regulares em python para implementar os refactorings.")
            
    def setupUi(self, Refactool):
        Refactool.setObjectName(_fromUtf8("Refactool"))
        Refactool.resize(492, 313)
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(_fromUtf8("1452113474_arrow_cycle.ico")), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        Refactool.setWindowIcon(icon)
        
        self.centralwidget = QtGui.QWidget(Refactool)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        
        self.gbDiretorio = QtGui.QGroupBox(self.centralwidget)
        self.gbDiretorio.setGeometry(QtCore.QRect(10, 10, 471, 121))
        self.gbDiretorio.setObjectName(_fromUtf8("gbDiretorio"))

        self.btn_buscar = QtGui.QPushButton(self.gbDiretorio)
        self.btn_buscar.setGeometry(QtCore.QRect(370, 80, 93, 28))
        self.btn_buscar.setObjectName(_fromUtf8("btn_buscar"))
        self.btn_buscar.clicked.connect(self.buscar_diretorio)
        

        self.diretorio = QtGui.QLineEdit(self.gbDiretorio)
        self.diretorio.setGeometry(QtCore.QRect(20, 40, 441, 22))
        self.diretorio.setObjectName(_fromUtf8("diretorio"))

        self.gbRef = QtGui.QGroupBox(self.centralwidget)
        self.gbRef.setGeometry(QtCore.QRect(10, 150, 471, 71))
        self.gbRef.setObjectName(_fromUtf8("gbRef"))

        self.cbRef1 = QtGui.QCheckBox(self.gbRef)
        self.cbRef1.setGeometry(QtCore.QRect(20, 30, 81, 20))
        self.cbRef1.setObjectName(_fromUtf8("cbRef1"))
        self.cbRef1.setChecked(True)
        

        self.cbRef2 = QtGui.QCheckBox(self.gbRef)
        self.cbRef2.setGeometry(QtCore.QRect(70, 30, 81, 20))
        self.cbRef2.setObjectName(_fromUtf8("cbRef2"))
        self.cbRef2.setChecked(True)

        self.cbRef3 = QtGui.QCheckBox(self.gbRef)
        self.cbRef3.setGeometry(QtCore.QRect(120, 30, 81, 20))
        self.cbRef3.setObjectName(_fromUtf8("cbRef3"))
        self.cbRef3.setChecked(True)

        self.cbRef4 = QtGui.QCheckBox(self.gbRef)
        self.cbRef4.setGeometry(QtCore.QRect(170, 30, 81, 20))
        self.cbRef4.setObjectName(_fromUtf8("cbRef4"))
        self.cbRef4.setChecked(True)

        self.cbRef5 = QtGui.QCheckBox(self.gbRef)
        self.cbRef5.setGeometry(QtCore.QRect(220, 30, 81, 20))
        self.cbRef5.setObjectName(_fromUtf8("cbRef5"))
        self.cbRef5.setChecked(True)

        self.cbRef6 = QtGui.QCheckBox(self.gbRef)
        self.cbRef6.setGeometry(QtCore.QRect(270, 30, 81, 20))
        self.cbRef6.setObjectName(_fromUtf8("cbRef6"))
        self.cbRef6.setChecked(True)

        self.cbRef7 = QtGui.QCheckBox(self.gbRef)
        self.cbRef7.setGeometry(QtCore.QRect(320, 30, 81, 20))
        self.cbRef7.setObjectName(_fromUtf8("cbRef7"))
        self.cbRef7.setChecked(True)

        self.cbRef8 = QtGui.QCheckBox(self.gbRef)
        self.cbRef8.setGeometry(QtCore.QRect(370, 30, 81, 20))
        self.cbRef8.setObjectName(_fromUtf8("cbRef8"))
        self.cbRef8.setChecked(True)

        self.cbRef9 = QtGui.QCheckBox(self.gbRef)
        self.cbRef9.setGeometry(QtCore.QRect(420, 30, 81, 20))
        self.cbRef9.setObjectName(_fromUtf8("cbRef9"))
        self.cbRef9.setChecked(True)

        self.cbTransformar = QtGui.QCheckBox(self.centralwidget)
        self.cbTransformar.setGeometry(QtCore.QRect(20, 240, 111, 20))
        self.cbTransformar.setObjectName(_fromUtf8("cbTransformar"))
        self.cbTransformar.setChecked(True)

        self.btn_executar = QtGui.QPushButton(self.centralwidget)
        self.btn_executar.setGeometry(QtCore.QRect(390, 230, 93, 28))
        self.btn_executar.setObjectName(_fromUtf8("btn_executar"))
        self.btn_executar.clicked.connect(self.executar)

        Refactool.setCentralWidget(self.centralwidget)

        self.menubar = QtGui.QMenuBar(Refactool)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 492, 26))
        self.menubar.setObjectName(_fromUtf8("menubar"))

        self.menuSobre = QtGui.QMenu(self.menubar)
        self.menuSobre.setObjectName(_fromUtf8("menuSobre"))
        
        
        Refactool.setMenuBar(self.menubar)
        self.statusbar = QtGui.QStatusBar(Refactool)
        self.statusbar.setObjectName(_fromUtf8("statusbar"))
        Refactool.setStatusBar(self.statusbar)

        self.actionGithub = QtGui.QAction(Refactool)
        self.actionGithub.setObjectName(_fromUtf8("actionGithub"))
        self.actionGithub.triggered.connect(self.github)

        self.actionRefactool = QtGui.QAction(Refactool)
        self.actionRefactool.setObjectName(_fromUtf8("actionRefactool"))
        self.actionRefactool.triggered.connect(self.sobre)

        self.menuSobre.addAction(self.actionGithub)
        self.menuSobre.addSeparator()
        self.menuSobre.addAction(self.actionRefactool)

        self.menubar.addAction(self.menuSobre.menuAction())

        self.retranslateUi(Refactool)
        QtCore.QMetaObject.connectSlotsByName(Refactool)

    def retranslateUi(self, Refactool):
        Refactool.setWindowTitle(_translate("Refactool", "Refactool", None))

        self.gbDiretorio.setTitle(_translate("Refactool", "Diretório", None))

        self.btn_buscar.setText(_translate("Refactool", "Buscar", None))

        self.gbRef.setTitle(_translate("Refactool", "Refactorings", None))

        self.cbRef1.setText(_translate("Refactool", "1", None))
        self.cbRef2.setText(_translate("Refactool", "2", None))
        self.cbRef3.setText(_translate("Refactool", "3", None))
        self.cbRef4.setText(_translate("Refactool", "4", None))
        self.cbRef5.setText(_translate("Refactool", "5", None))
        self.cbRef6.setText(_translate("Refactool", "6", None))
        self.cbRef7.setText(_translate("Refactool", "7", None))
        self.cbRef8.setText(_translate("Refactool", "8", None))
        self.cbRef9.setText(_translate("Refactool", "9", None))

        self.cbTransformar.setText(_translate("Refactool", "Transformar", None))

        self.btn_executar.setText(_translate("Refactool", "Executar", None))

        self.menuSobre.setTitle(_translate("Refactool", "Sobre", None))

        self.actionGithub.setText(_translate("Refactool", "Github", None))

        self.actionRefactool.setText(_translate("Refactool", "Refactool", None))


if __name__ == "__main__":
    import sys
    app = QtGui.QApplication(sys.argv)
    Refactool = QtGui.QMainWindow()
    ui = Ui_Refactool()
    ui.setupUi(Refactool)
    Refactool.show()
    sys.exit(app.exec_())

