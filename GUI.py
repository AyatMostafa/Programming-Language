import tkinter as tk
from tkinter import ttk
from tkinter import filedialog as fd
from tkinter.messagebox import showinfo
import os
# create the root window
root = tk.Tk()
root.title('Tkinter Open File Dialog')
root.resizable(False, False)
root.geometry('300x150')


def select_file():
    filetypes = (
        ('text files', '*.txt'),
        ('All files', '*.*')
    )

    filename = fd.askopenfilename(
        title='Open a file',
        filetypes=filetypes)

    showinfo(
        title='Selected File',
        message=filename
    )
    os.system('lex lexer.l')
    os.system('yacc -d parser.y')
    os.system('gcc -w y.tab.c lex.yy.c -o project')
    os.system('./project ' + filename)

# open button
open_button = ttk.Button(
    root,
    text='Open a File',
    command=select_file
)

open_button.pack(expand=True)


# run the application
root.mainloop()