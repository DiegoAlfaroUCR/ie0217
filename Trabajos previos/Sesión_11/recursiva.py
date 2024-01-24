## Se define una función recursiva.
def factorial(x):
    """Función recursiva para retornar el factorial
       de un número entero.
    """

    # Caso de salida
    if x == 1:
        return 1

    # Caso recursivo
    else:
        return (x * factorial(x - 1))

num = 3
print("The factorial of", num, "is", factorial(num))