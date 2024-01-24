# Se crea una función con parámetros por defecto.

def add_numbers(a=7, b=8):
    sum = a + b
    print('Sum:', sum)

# Llamado de la función con 2 argumentos.
add_numbers(2, 3)

# Llamado de la función con 1 argumento.
add_numbers(a = 2)

# Llamado de la función sin argumentos.
add_numbers()


### Se crea una función con parámetros en cierto orden.
def display_info(first_name, last_name):
    print('First Name:', first_name)
    print('Last Name:', last_name)

# Se llama con parámetros fuera de orden al definir cual variable se da.
display_info(last_name= 'Cartman', first_name= 'Eric')