import webbrowser

from tkinter import *

class Application(Frame):
    
    
    def sobre(self):
        webbrowser.open('https://github.com/antoniocorreia/refactool')

    def buscar_diretorio(self):
        print("buscar diretorio")

    def transformar(self):
        print ("transformar")
    
    def createWidgets(self):

        
        self.btn_diretorio = Button(self)
        self.btn_diretorio["text"] = "Buscar"
        self.btn_diretorio["command"] =  self.buscar_diretorio

        self.btn_diretorio.pack()

        self.lbl_transformacoes = Label(self, text="REFACTORINGS")
        self.lbl_transformacoes.pack()

        #todo : lista de refactorigns
        ref1 = IntVar()
        self.check_ref1 = Checkbutton(self, text="1", variable=ref1)
        self.check_ref1.pack(side="left", anchor="n", expand=YES)

        ref2 = IntVar()
        self.check_ref2 = Checkbutton(self, text="2", variable=ref2)
        self.check_ref2.pack(side="left", anchor="n", expand=YES)

        ref3 = IntVar()
        self.check_ref3 = Checkbutton(self, text="3", variable=ref3)
        self.check_ref3.pack(side="left", anchor="n", expand=YES)

        ref4 = IntVar()
        self.check_ref4 = Checkbutton(self, text="4", variable=ref4)
        self.check_ref4.pack(side="left", anchor="n", expand=YES)

        ref5 = IntVar()
        self.check_ref5 = Checkbutton(self, text="5", variable=ref5)
        self.check_ref5.pack(side="left", anchor="n", expand=YES)

        ref6 = IntVar()
        self.check_ref6 = Checkbutton(self, text="6", variable=ref6)
        self.check_ref6.pack(side="left", anchor="n", expand=YES)

        ref7 = IntVar()
        self.check_ref7 = Checkbutton(self, text="7", variable=ref7)
        self.check_ref7.pack(side="left", anchor="n", expand=YES)

        ref8 = IntVar()
        self.check_ref8 = Checkbutton(self, text="8", variable=ref8)
        self.check_ref8.pack(side="left", anchor="n", expand=YES)

        ref9 = IntVar()
        self.check_ref9 = Checkbutton(self, text="9", variable=ref9)
        self.check_ref9.pack(side="left", anchor="n", expand=YES)
        
        #fim da lista de refactorings

        trans = IntVar()
        self.check_transformar = Checkbutton(self, text="Transformar", variable=trans)
        self.check_transformar.pack()
        #self.check_transformar.grid(row=1,column=1)
        
        self.btn_transformar = Button(self)
        self.btn_transformar["text"] = "Executar"
        self.btn_transformar["command"] =  self.transformar

        self.btn_transformar.pack()


        self.QUIT = Button(self)
        self.QUIT["text"] = "Sair"
        #self.QUIT["fg"]   = "red"
        self.QUIT["command"] =  self.quit

        self.QUIT.pack()

        #self.hi_there = Button(self)
        #self.hi_there["text"] = "Hello",
        #self.hi_there["command"] = self.say_hi

        #self.hi_there.pack({"side": "left"})

        
        menubar = Menu(self)
        menubar.add_command(label="Sobre", command=self.sobre)

        
        root.config(menu=menubar)

    def __init__(self, master=None):
        Frame.__init__(self, master)
        self.pack()
        self.createWidgets()

        

root = Tk()
root.geometry("500x600")
root.title("REfactool")



app = Application(master=root)
app.mainloop()
root.destroy()
