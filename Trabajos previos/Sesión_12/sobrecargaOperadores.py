# Se crea clase.
class Point:
    # Constructor.
    def _init_(self, x=0, y=0):
        self.x = x
        self.y = y

    # Método con operador para convertir a string.
    def _str_(self):
        return "({0},{1})".format(self.x, self.y)

    # Método con operador para sumar con otro objeto.
    def _add_(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)

# Se crean los objetos.
p1 = Point(1,2)
p2 = Point(2, 3)

# Se suman, usando operadaor add, y se imprimen usando operador str.
print(p1+p2)