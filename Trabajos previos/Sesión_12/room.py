# Se crea una clase de tipo Room.
class Room:
    length = 0.0
    breadth = 0.0

    # Método para calcular el área.
    # Atributo self se refiere al objeto que llama al método (this en C++).
    def calculate_area(self):
        print("Area of Room =", self.length * self.breadth)

# Se crea un objeto de clase Room
study_room = Room()

# Se inicializan sus atributos.
study_room.length = 42.5
study_room.breadth = 30.8

# Se llama al método del objeto.
study_room.calculate_area()