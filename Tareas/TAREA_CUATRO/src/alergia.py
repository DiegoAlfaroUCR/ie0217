
class Alergia:
    def __init__(self, name, puntos):
        self.name = name
        self.puntos = puntos

    def mostrar_info(self, todasAlergias=None):
        if todasAlergias is not None:
            print("-----Mostrando informacion de todas las alergias-----\n")
            for alergia in todasAlergias:
                alergia.mostrar_info()
        else:
            print(f"Nombre: {self.name}, Puntuacion: {self.puntos}")
