# Función con valor por defector name.
def greet(name ="Sin Nombre"):
    print("Hola mops de IE0217, especialmente a", name)

# Función con dos argumentos.
def add_numbers(num1, num2):
    sum = num1 + num2
    print("Sum: ", sum)

# Función sin argumentos.
def add_numbers():
    print("Sin argumentos")


greet("Diego")

# Al no darle argumentos se llama la definición sin argumentos.
add_numbers()
