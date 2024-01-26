class Person:
    # Inicializador que define los atributos de la clase.
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Método para mostrar atributos.
    def display_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")
