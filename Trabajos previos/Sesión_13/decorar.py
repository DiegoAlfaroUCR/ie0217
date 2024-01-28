# Funcion para decorar a otra.
def make_pretty(func):
    # Se crea funcion interna.
    def inner():
        # Código ejecutado al llamar inner
        print("I got decorated")

        # Se llama funcion pasada por argumento.
        func()
    # Se retorna funcion interna.
    return inner


# Se define una funcion normal.
def ordinary():
    print("I am ordinary")


# Se agrega decorador a funcion ordinaria.
decorated_func = make_pretty(ordinary)

# Se llama la funcion decorada.
decorated_func()


# Forma equivalente usando sintaxis de decoradores.
@make_pretty
def ordinary():
    print("I am ordinary")


ordinary()
