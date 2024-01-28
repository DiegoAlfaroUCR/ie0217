# Programa para imprimir recíproco de números pares.

try:
    # Se levanta error si no es entero.
    num = int(input("Enter a number: "))

    # assert es equivalente a:
    # if !(num%2 == 0): raise AssertionError
    # levanta error si la condicion no se da
    assert num % 2 == 0
# Except general.
except:
    print("Not an even number!")
# Si no se da el except se da el else.
else:
    reciprocal = 1/num
    print(reciprocal)
