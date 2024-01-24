# Se crea clase base Animal.
class Animal:

    # Se declara un atributo y un método de la clase base.
    name = ""

    def eat(self):
        print("I can eat")

# Clase Dog que hereda de Animal.
class Dog(Animal):

    # Método nuevo de la clase hija.
    def display(self):
        # Se accede al atributo de clase base por medio de operador self.
        print("My name is", self.name)

# Se creae un objeto de clase Dog.
labrador = Dog()

# Se acceden atributos/métodos de clase base por medio de objeto Dog.
labrador.name = "Rohu"
labrador.eat()

# Se llama método de clase hija.
labrador.display()