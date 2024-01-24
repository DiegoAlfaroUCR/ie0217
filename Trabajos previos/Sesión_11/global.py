# Variable global
c = 1

def add():
    # Se debe usar operador global para poder modificar c.
    global c

    # Se aumenta c por 2
    c = c + 2

    print(c)

add()