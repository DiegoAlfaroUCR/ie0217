# Función principal que contiene función interna.
def calculate():
    num = 1

    def inner_func():
        # nonlocal hace que se referencie a num fuera del scope.
        # cambia el num de calculate.
        nonlocal num
        num += 2
        return num
    return inner_func


# Se llama la función principal.
# Se define el num de la función como 1.
odd = calculate()

# Se llama la funcion interna al llamar la funcion.
# Estas cambian el num de odd.
print(odd())
print(odd())
print(odd())

# Se vuelve a llamar la función principal en otra variable.
# El num de odd2 inicia como 1.
odd2 = calculate()
print(odd2())
