# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'gui.ui'
#
# Created by: PyQt4 UI code generator 4.11.4
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

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
    def setupUi(self, Refactool):
        Refactool.setObjectName(_fromUtf8("Refactool"))
        Refactool.resize(492, 313)
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(_fromUtf8("1452113474_arrow_cycle.ico")), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        Refactool.setWindowIcon(icon)
        self.centralwidget = QtGui.QWidget(Refactool)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.groupBox = QtGui.QGroupBox(self.centralwidget)
        self.groupBox.setGeometry(QtCore.QRect(10, 10, 471, 121))
        self.groupBox.setObjectName(_fromUtf8("groupBox"))
        self.pushButton = QtGui.QPushButton(self.groupBox)
        self.pushButton.setGeometry(QtCore.QRect(370, 80, 93, 28))
        self.pushButton.setObjectName(_fromUtf8("pushButton"))
        self.lineEdit = QtGui.QLineEdit(self.groupBox)
        self.lineEdit.setGeometry(QtCore.QRect(20, 40, 441, 22))
        self.lineEdit.setObjectName(_fromUtf8("lineEdit"))
        self.groupBox_3 = QtGui.QGroupBox(self.centralwidget)
        self.groupBox_3.setGeometry(QtCore.QRect(10, 150, 471, 71))
        self.groupBox_3.setObjectName(_fromUtf8("groupBox_3"))
        self.checkBox = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox.setGeometry(QtCore.QRect(20, 30, 81, 20))
        self.checkBox.setObjectName(_fromUtf8("checkBox"))
        self.checkBox_2 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_2.setGeometry(QtCore.QRect(70, 30, 81, 20))
        self.checkBox_2.setObjectName(_fromUtf8("checkBox_2"))
        self.checkBox_3 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_3.setGeometry(QtCore.QRect(120, 30, 81, 20))
        self.checkBox_3.setObjectName(_fromUtf8("checkBox_3"))
        self.checkBox_4 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_4.setGeometry(QtCore.QRect(170, 30, 81, 20))
        self.checkBox_4.setObjectName(_fromUtf8("checkBox_4"))
        self.checkBox_5 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_5.setGeometry(QtCore.QRect(220, 30, 81, 20))
        self.checkBox_5.setObjectName(_fromUtf8("checkBox_5"))
        self.checkBox_6 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_6.setGeometry(QtCore.QRect(270, 30, 81, 20))
        self.checkBox_6.setObjectName(_fromUtf8("checkBox_6"))
        self.checkBox_7 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_7.setGeometry(QtCore.QRect(320, 30, 81, 20))
        self.checkBox_7.setObjectName(_fromUtf8("checkBox_7"))
        self.checkBox_8 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_8.setGeometry(QtCore.QRect(370, 30, 81, 20))
        self.checkBox_8.setObjectName(_fromUtf8("checkBox_8"))
        self.checkBox_9 = QtGui.QCheckBox(self.groupBox_3)
        self.checkBox_9.setGeometry(QtCore.QRect(420, 30, 81, 20))
        self.checkBox_9.setObjectName(_fromUtf8("checkBox_9"))
        self.checkBox_10 = QtGui.QCheckBox(self.centralwidget)
        self.checkBox_10.setGeometry(QtCore.QRect(20, 240, 111, 20))
        self.checkBox_10.setObjectName(_fromUtf8("checkBox_10"))
        self.btn_executar = QtGui.QPushButton(self.centralwidget)
        self.btn_executar.setGeometry(QtCore.QRect(390, 230, 93, 28))
        self.btn_executar.setObjectName(_fromUtf8("btn_executar"))
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
        self.actionRefactool = QtGui.QAction(Refactool)
        self.actionRefactool.setObjectName(_fromUtf8("actionRefactool"))
        self.menuSobre.addAction(self.actionGithub)
        self.menuSobre.addSeparator()
        self.menuSobre.addAction(self.actionRefactool)
        self.menubar.addAction(self.menuSobre.menuAction())

        self.retranslateUi(Refactool)
        QtCore.QMetaObject.connectSlotsByName(Refactool)

    def retranslateUi(self, Refactool):
        Refactool.setWindowTitle(_translate("Refactool", "Refactool", None))
        self.groupBox.setTitle(_translate("Refactool", "Diretório", None))
        self.pushButton.setText(_translate("Refactool", "Buscar", None))
        self.groupBox_3.setTitle(_translate("Refactool", "Refactorings", None))
        self.checkBox.setText(_translate("Refactool", "1", None))
        self.checkBox_2.setText(_translate("Refactool", "2", None))
        self.checkBox_3.setText(_translate("Refactool", "3", None))
        self.checkBox_4.setText(_translate("Refactool", "4", None))
        self.checkBox_5.setText(_translate("Refactool", "5", None))
        self.checkBox_6.setText(_translate("Refactool", "6", None))
        self.checkBox_7.setText(_translate("Refactool", "7", None))
        self.checkBox_8.setText(_translate("Refactool", "8", None))
        self.checkBox_9.setText(_translate("Refactool", "9", None))
        self.checkBox_10.setText(_translate("Refactool", "Transformar", None))
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

