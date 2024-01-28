
def add(x, y):
    # Función para sumar dos números.
    return x + y


# Decorador.
def calculate(func, x, y):
    # Función que recibe una función y dos argumentos
    # que se pasan a la función recibida.
    return func(x, y)


# Se llama el decorador con add y dos números.
result = calculate(add, 4, 6)
print(result)
