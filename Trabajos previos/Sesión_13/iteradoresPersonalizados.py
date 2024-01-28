# Clase para crear un iterador personalizado.
class PowTwo:
    """Clase que implementa un iterador de potencias de dos.
    """

    def __init__(self, max=0):
        """Inicializador que define un índice máximo de iteración.

        :param max: Indice de iteraciones máximas, defaults to 0
        :type max: int, optional
        """
        self.max = max

    def __iter__(self):
        """Método para crear un iterador del objeto.
        Define un contador que indica cantidad de veces que se
        ha iterado sobre el iterador.

        :return: Retorna el mismo objeto.
        :rtype: PowTow
        """
        self.n = 0
        return self

    def __next__(self):
        """Método para iterar sobre el propio iterador.

        :raises StopIteration: Error si la cantidad de iteraciones
        pasa el limite.
        :return: 2 elevado a la potencia n.
        :rtype: int
        """
        if self.n <= self.max:
            result = 2 ** self.n
            self.n += 1
            return result
        else:
            raise StopIteration


# Se crea un objeto PowTwo
numbers = PowTwo(3)

# Se crea un iterador
i = iter(numbers)

# Se puede hacer con next o con for.
# Se imprime usando next
print(next(i))
print(next(i))
print(next(i))
print(next(i))
# print(next(i))   Este levanta StopIteration

# Ahora con for
for x in PowTwo(3):
    print(x)
