# Se crea una función con una función interna
def greet(name):
    # Función interna
    def display_name():
        print("Hi", name)

    # Se llama la función interna
    display_name()


# Se llama la función base
greet("John")


# Otra forma con la funcion interna lambda
def greet():
    name = "John"

    # Se retorna por función lambda.
    return lambda: "Hi " + name


# Se asigna la función a variable message.
message = greet()

# Se muestra el resultado de la función.
print(message())
