def fibonacci_numbers(nums):
    """Función para obtener secuencia de fibonachi
    para una posición dada.

    :param nums: Posición hasta ;a que se calcula la secuencia.
    :type nums: int
    :yield: Secuencia de fibonachi con cantidad nums de números.
    :rtype: int
    """
    x, y = 0, 1
    for _ in range(nums):
        x, y = y, x+y
        yield x


def square(nums):
    """Eleva al cuadrado una lista de numeros.

    :param nums: Lista de números a elevar.
    :type nums: list
    :yield: Secuencia de números elevados al cuadrado.
    :rtype: int
    """
    for num in nums:
        yield num ** 2


print(sum(square(fibonacci_numbers(10))))
