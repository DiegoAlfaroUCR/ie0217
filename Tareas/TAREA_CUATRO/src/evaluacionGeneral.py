from tiposAlergias import TipoAlergias


class evaluacionGeneral(TipoAlergias):
    def __init__(self):
        super().__init__()

    def calcularPuntaje(self):
        puntaje = 0
        for alergia in self.ingresadas:
            puntaje += alergia.puntos
        return puntaje

    def calcularPromedio(self):
        cantidadDefinida = len(self.ingresadas)
        cantidadIndef = len(self.sinNombre) + len(self.sinPuntos)
        promedio = cantidadDefinida/(cantidadDefinida + cantidadIndef)
        if promedio != 1:
            print("Promedio de alergias identificadas: %.2f" % promedio)

    def mostrarIndefinidos(self):
        if len(self.sinPuntos) != 0:
            print("Alergias sin puntaje conocido:")
            print(self.sinPuntos)

        if len(self.sinNombre) != 0:
            print("Resultados Desconocidos (puntajes sin nombre):")
            print(self.sinNombre)

    def mostrarGeneral(self):
        print("\n-----Su Información General-----")
        print("Su puntuación general de alergias:", self.calcularPuntaje())
        print("Las alergias que le afectan: ")
        for alergia in self.ingresadas:
            alergia.mostrar_info()

        self.calcularPromedio()
        self.mostrarIndefinidos()
