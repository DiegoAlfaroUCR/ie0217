# Decorador, permite dividir a partir de funcion recibida.
def smart_divide(func):
    # Funcion interna, termina si la división se hace entre 0.
    def inner(a, b):
        print("I am going to divide", a, "and", b)
        if b == 0:
            print("Whoops! cannot divide")
            return

        # Se retorna el resultado de la funcion dada.
        return func(a, b)
    return inner


# Se decora funcion que divide dos números.
@smart_divide
def divide(a, b):
    print(a/b)


# Se llama la funcion decorada.
divide(2, 5)

divide(2, 0)
