# Se crea clase base Animal.
class Animal:

    # Se declaran atributos y métodos de clase base.
    name = ""

    # Método eat en clase base.
    def eat(self):
        print("I can eat")

# Clase Dog que hereda de Animal.
class Dog(Animal):

    # Se sobreescribe el método Base se usa el mismo nombre y los mismos argumentos.
    def eat(self):
        print("I like to eat bones")

# Se crea un objeto de la clase hija.
labrador = Dog()

# Se llama el método sobreescrito, se usa el de la clase hija.
labrador.eat()