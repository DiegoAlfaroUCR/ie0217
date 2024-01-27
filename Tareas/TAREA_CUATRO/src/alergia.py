
class Alergia:

    todasAlergias = {}

    def __init__(self, name, puntos):
        self.name = name
        self.puntos = puntos

    def mostrar_info(self, Todas=False):
        if Todas is not False:
            print("\n-----Mostrando informacion de todas las alergias-----\n")
            for alergia in self.todasAlergias.values():
                alergia.mostrar_info()
        else:
            print(f"Nombre: {self.name}, Puntuacion: {self.puntos}")

    def baseDatos(self):
        # Se agregan las alergias dadas por la tarea.
        self.todasAlergias[1] = Alergia("huevos", 1)
        self.todasAlergias[2] = Alergia("cacahuates", 2)
        self.todasAlergias[4] = Alergia("mariscos", 4)
        self.todasAlergias[8] = Alergia("fresas", 8)
        self.todasAlergias[16] = Alergia("tomates", 16)
        self.todasAlergias[32] = Alergia("chocolate", 32)
        self.todasAlergias[64] = Alergia("polen", 64)
        self.todasAlergias[128] = Alergia("gatos", 128)
        self.todasAlergias[256] = Alergia("sardina", 256)
        self.todasAlergias[512] = Alergia("gluten", 512)
        self.todasAlergias[1024] = Alergia("huevo", 1024)

    def listaNombres(self, listaAlergias=None):
        if listaAlergias is not None:
            return [alergia.name for alergia in listaAlergias]
        return [self.todasAlergias[x].name for x in self.todasAlergias]
