# Clase polygon, posee constructor y dos métodos públicos.
class Polygon:

    # Constructor que inicializa n y sides.
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)]

    # Método para definir lados.
    def inputSides(self):
        self.sides = [float(input("Enter side "+str(i+1)+" : ")) for i in range(self.n)]

    # Método para mostrar los lados.
    def dispSides(self):
        for i in range(self.n):
            print("Side",i+1,"is",self.sides[i])


# Clase triangle, hereda de polygon.
class Triangle(Polygon):

    # Constructor que llama el constructor de polygon con número de lados 3.
    def __init__(self):
        Polygon.__init__(self,3)

    # Método para encontrar el área del triangulo.
    def findArea(self):
        # Obtiene los 3 lados del triangulo.
        a, b, c = self.sides
        # Aplica fórmulas para obtener el área.
        s = (a + b + c) / 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        # Imprime el área.
        print('The area of the triangle is %0.2f' %area)


# Se crea una instancia de Triangle.
t = Triangle()

# Se solicitan los lados del triangulo
t.inputSides()

# Se muestran los lados del triangulo
t.dispSides()

# Se calcula y muestra el área.
t.findArea()