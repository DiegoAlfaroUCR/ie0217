from math import pi

# Clase base.
class Shape:
    # Constructor
    def __init__(self, name):
        self.name = name

    # Método área
    def area(self):
        pass

    # Método fact
    def fact(self):
        return "I am a two-dimensional shape."

    # Método para convertir a string.
    def __str__(self):
        return self.name

# Clase derivada square, hereda de Shape.
class Square(Shape) :
    # Constructor que llama constructor base.
    def __init__(self, length):
        super().__init__("Square")
        self.length = length

    # Método area, sobreescribe el de base.
    def area(self):
        return self.length ** 2

    # Método fact, sobreescribe el de base.
    def fact(self):
        return "Squares have each angle equal to 90 degrees."

# Clase derivada circle, hereda de Shape.
class Circle(Shape):
    # Constructor que llama constructor base.
    def __init__(self, radius):
        super().__init__("Circle")
        self.radius = radius

    # Método area, sobreescribe el de base.
    def area(self):
        return pi*self.radius ** 2

# Se crean objetos de clase square y circle.
a = Square(4)
b = Circle(7)

# Se usa método base de convertir a str para imprimir. 
print(b)

# Se llama método sobreescrito fact.
print(b.fact())

# Se llama método de base fact.
print(a.fact())

# Se llama método sobreescrito area.
print(b.area())