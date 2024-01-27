from alergia import Alergia


class TipoAlergias(Alergia):

    todasAlergias = []
    ingresadas = []
    sinNombre = []
    sinPuntos = []

    def __init__(self):
        # Se agregan las alergias dadas por la tarea.
        self.todasAlergias.append(Alergia("huevos", 1))
        self.todasAlergias.append(Alergia("cacahuates", 2))
        self.todasAlergias.append(Alergia("mariscos", 4))
        self.todasAlergias.append(Alergia("fresas", 8))
        self.todasAlergias.append(Alergia("tomates", 16))
        self.todasAlergias.append(Alergia("chocolate", 32))
        self.todasAlergias.append(Alergia("polen", 64))
        self.todasAlergias.append(Alergia("gatos", 128))
        self.todasAlergias.append(Alergia("sardina", 256))
        self.todasAlergias.append(Alergia("gluten", 512))
        self.todasAlergias.append(Alergia("huevo", 1024))

    def ingresarAlergia(self):
        print("Ingrese las alergias que le afectan.\
               \nNo ingrese datos para salir.")

        while True:
            cin = input("Ingrese nombre y/o puntaje de la alergia: ")
            argumentos = [arg for arg in cin.split()]

            if len(argumentos) == 0:
                break

            numDado = False
            nombreDado = False

            for argumento in argumentos:
                if argumento.isnumeric():
                    numDado = True
                    numObj = int(argumento)
                else:
                    nombreDado = True
                    nombreObj = argumento

            if numDado and nombreDado:
                self.ingresadas.append(Alergia(nombreObj, numObj))
            elif numDado:
                self.sinNombre.append(numObj)
            elif nombreDado:
                self.sinPuntos.append(nombreObj)

        self.relacionar()

    def relacionar(self):
        listaSinNombre = [punto for punto in self.sinNombre]
        for punto in listaSinNombre:
            try:
                eval = next(x for x in self.todasAlergias if x.puntos == punto)
                self.ingresadas.append(eval)
                self.sinNombre.remove(punto)
            except StopIteration:
                pass

        listaSinPuntos = [nom for nom in self.sinPuntos]
        for nom in listaSinPuntos:
            try:
                eval = next(x for x in self.todasAlergias if x.name == nom)
                self.ingresadas.append(eval)
                self.sinPuntos.remove(nom)
            except StopIteration:
                pass
