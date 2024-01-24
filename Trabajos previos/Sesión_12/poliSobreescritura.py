# Clase base con método render.
class Polygon:
    # method to render a shape
    def render(self):
        print("Rendering Polygon ... ")

# Clase derivada square con método render.
class Square(Polygon):
    def render(self):
        print("Rendering Square ... ")

# Clase derivada circle con método render.
class Circle(Polygon):
    def render(self):
        print("Rendering Circle ... ")

# Se crea objeto square que llama render de square.
s1 = Square()
s1.render()

# Se crea objeto circle que llama render de circle.
c1 = Circle()
c1.render()