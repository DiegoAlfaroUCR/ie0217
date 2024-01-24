# Se define clase tipo Bike.
class Bike:
    name = ""
    gear = 0
    ## NOTE QUE SI SE PONE UN COMANDO AQUI SE LLAMA
    print("Esto se imprime al crear el objeto. ")

# Se crea un objeto de tipo clase, llamando su constructor.
bike1 = Bike()

# Se inicializan/redefinen los atributos del objeto.
bike1.gear = 11
bike1.name = "Mountain Bike"

# Se imprimen los atributos.
print(f"Name: {bike1.name}, Gears: {bike1.gear} ")