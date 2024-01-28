# Función que incluye funcoion anidada, la función outer es el decorador.
def outer(x):
    # Función anidada.
    def inner(y):
        return x + y
    return inner


# Se asigna el decorador a add_five con x = 5
add_five = outer(5)
# Se llama la función anidada con y = 6
result = add_five(6)
print(result)
