# Uso de finally

try:
    numerator = 10
    denominator = 0

    result = numerator/denominator

    print(result)

# Except en el caso de division entre 0.
except:
    print("Error: Denominator cannot be 0.")

# Este bloque siempre se ejecuta, con excepcion o no.
finally:
    print("This is finally block.")
