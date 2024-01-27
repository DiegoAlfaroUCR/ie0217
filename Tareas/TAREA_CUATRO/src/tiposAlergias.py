from alergia import Alergia


class TipoAlergias(Alergia):

    ingresadas = []
    sinNombre = []
    sinPuntos = []

    def __init__(self):
        self.baseDatos()

    def asignacion(self, argumentos):
        numDado = False
        nombreDado = False

        for argumento in argumentos:
            if argumento.isdigit():
                numDado = True
                numObj = int(argumento)
            elif argumento.isalpha():
                nombreDado = True
                nombreObj = argumento
            else:
                print("^^ Descartado: no corresponde a nombre o puntaje. ^^\n")

        if numDado and nombreDado:
            self.ingresadas.append(Alergia(nombreObj, numObj))
        elif numDado:
            self.sinNombre.append(numObj)
        elif nombreDado:
            self.sinPuntos.append(nombreObj)

    def relacionar(self):
        listaSinNombre = [punto for punto in self.sinNombre]
        for punto in listaSinNombre:
            # Condiciones
            coincide = punto in self.todasAlergias
            if coincide:
                original = self.todasAlergias[punto] not in self.ingresadas
                self.sinNombre.remove(punto)

            if (coincide) and (original):
                self.ingresadas.append(self.todasAlergias[punto])

        listaSinPuntos = [nombre for nombre in self.sinPuntos]
        for nombre in listaSinPuntos:
            # Condiciones
            coincide = nombre in self.listaNombres()
            if coincide:
                original = nombre not in self.listaNombres(self.ingresadas)
                self.sinPuntos.remove(nombre)

            if (coincide) and (original):
                reverse = {a.name: p for p, a in self.todasAlergias.items()}
                puntos = reverse[nombre]
                self.ingresadas.append(self.todasAlergias[puntos])

    def ingresarAlergia(self):
        print("\nIngrese las alergias que le afectan.\
               \nNo ingrese datos para salir.")

        while True:
            cin = input("Ingrese nombre y/o puntaje de la alergia: ")
            argumentos = [arg for arg in cin.split()]

            if len(argumentos) == 0:
                break

            self.asignacion(argumentos)

        self.relacionar()

    def crearAlergia(self):
        print("Ingrese los datos de la alergia a agregar al registro.")
        name = input("Ingrese el nombre: ")
        puntos = input("Ingrese el puntaje (debe ser potencia de 2): ")

        if not puntos.isdigit():
            print("\nERROR: El puntaje dado no es un numero.")
            return
        puntos = int(puntos)

        if (puntos & (puntos - 1)) != 0:
            print("\nERROR: El puntaje dado no es potencia de 2.")
            return

        if puntos in self.todasAlergias:
            print("\nERROR: El puntaje dado pertenece a otra alergia.")
            return

        if name in self.listaNombres():
            print("\nERROR: Nombre de alergia ya existe.")
            return

        self.todasAlergias[puntos] = Alergia(name, puntos)
