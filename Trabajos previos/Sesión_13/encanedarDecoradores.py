# Decorador star, imprime linea de * alrededor de funcion.
def star(func):
    def inner(*args, ** kwargs):
        print("*" * 15)
        func(*args, ** kwargs)
        print("*" * 15)
    return inner


# Decorador percent, imprime linea de % alrededor de funcion.
def percent(func):
    def inner(*args, ** kwargs):
        print("%" * 15)
        func(*args, ** kwargs)
        print("%" * 15)
    return inner


# Se decora la funcion con ambos decoradores.
@star
@percent
# Funcion para imprimir un mensaje.
def printer(msg):
    print(msg)


# Se llama funcion decorada.
# Ambos decoradores se dan alrededor de llamado de la funcion
printer("Hello")
