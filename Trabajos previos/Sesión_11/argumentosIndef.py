# Programa para encontrar suma de varios números.

def find_sum(*numbers): # Se establece cantidad indefinida de argumentos.
    result = 0

    for num in numbers:
        result = result + num
    
    print("Sum = ", result)

# Función con 3 argumentos.
find_sum(1, 2, 3)

# Función con 2 argumentos.
find_sum(4, 9)