
# Error por división entre 0.
try:
    numerator = 10
    denominator = 0

    result = numerator/denominator

    print(result)
# Se atrapa un error cualquiera.
except:
    print("Error: Denominator cannot be 0.")


# Excepciones por tipo de excepción
try:
    even_numbers = [2, 4, 6, 8]
    print(even_numbers[5])

# Excepcion por division entre 0.
except ZeroDivisionError:
    print("Denominator cannot be 0.")

# Excepcion por error de índice, esta se ejecuta
# entonces el mensaje que sale es este.
except IndexError:
    print("Index Out of Bound.")
