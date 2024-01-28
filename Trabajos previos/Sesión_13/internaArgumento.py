# Se crea funcion principal con funcion interna.
# Ambas requieren un argumento no definido.
def make_multiplier_of(n):
    """Función que asigna función interna a un objeto.

    :param n: Un número a multiplicar.
    :type n: numérico
    """
    def multiplier(x):
        """Función interna que multiplica dos números.

        :param x: Otro número a multiplicar
        :type x: numérico
        :return: Resultado de multiplicación.
        :rtype: numérico
        """
        return x * n
    return multiplier


# Se asigna función principal a variable.
times3 = make_multiplier_of(3)  # n = 3

times5 = make_multiplier_of(5)  # n = 5

# Se llama la función interna
print(times3(9))

# Output: 15
print(times5(3))

# Output: 30
print(times5(times3(2)))
