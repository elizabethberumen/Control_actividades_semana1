import os
import sys

def path_actual ():
    cwd=os.getcwd()
    print("Este es el path actual :D")
    dirname = os.path.dirname(__file__)
    filename = os.path.join(dirname, 'relative/path/to/file/you/want')
    print(cwd)
    print(filename)

#main
path_actual()