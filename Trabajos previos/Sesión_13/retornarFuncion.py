# Decorador que contiene función interna.
def greeting(name):
    # Función interna que usa el parámetro del decorador.
    def hello():
        # Retorna el string.
        return "Hello, " + name + "!"
    # Retorna la función interna.
    return hello


# Se crea varaible greet con el decorador.
# Como se le pasa un nombre y se retorna hello,
# es como si greet se definiera como hello pero el nombre como
# la entrada de greeting.
greet = greeting("Atlantis")
print(greet())
