Autor: Antonio Correia

/refactool_example => diretório de projeto exemplo com arquivos .c

/refactorings => diretório de arquivos dos refactorings

refatool_cl.py => Chamada por linha de código cl (command line), para mais informações: refactool_cl.py -h

refactool_core.py => core da ferramenta importado por refactool_cl e refactool_gui
	Exemplo: refactool_core('',[1,0,0,0,0,0,0,0,0],0)

refactool_gui.py => uso da ferramenta através de interface gráfica (Graphical User Interface)

util.py => utilidades, como função de reconhecimento dos padrões



Ferramenta de refactoring e transformação de programas, que receberá como entrada o diretório de um sistema (possivelmente) contendo anotações não disciplinadas, os refactorins do catálogo apresentado em
A catalogue of refactorings to remove incomplete annotations de F Medeiros, M Ribeiro, R Gheyi, B Fonseca, mais uma indicação para transformação ou não dos arquivos,
e produzirá como saída um arquivo de log refactool_log contendo estatísticas sobre os refactorings selecionados e opcionalmente o código
do sistema com todas as anotações disciplinadas no subdiretório refactool_transformacoes. São utilizadas expressões regulares em python para implementar os refactorings.