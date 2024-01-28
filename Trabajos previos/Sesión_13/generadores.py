# Generadores retornan una secuencia de valores
# emplean un operador yield para retornar cosas.

def my_generator(n):
    """Funcion que retorna secuencia de valores.
    Se usa yield para devolver una lista de valores sin guardar
    dicha lista como atributo.

    :param n: Cantidad de numeros a generar.
    :type n: int
    :yield: Devuelve conjunto de números aumentando hasta n.
    :rtype: int
    """
    value = 0

    while value < n:
        # Devuelve el valor en este punto de la función.
        # El yield no causa que se finaliza la función.
        yield value

        value += 1


# Como my_generator devuelve una lista se usa la sintaxis
# para iterar en una lista.
for value in my_generator(3):
    print(value)
