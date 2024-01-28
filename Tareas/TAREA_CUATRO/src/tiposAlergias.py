"""
Archivo para clase TipoAlergias
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


from alergia import Alergia


class TipoAlergias(Alergia):
    """Clase que permite al usuario modificar los tipos de Alergias.
    Hereda de Alergia para tener acceso a la base de datos y crear alergias.

    :param Alergia: Clase Alergia de la que hereda.
    :type Alergia: Alergia
    :param ingresadas: Lista de alergias completas/identificadas ingresadas.
    :type ingresadas: list
    :param sinNombre: Lista de puntajes ingresados no identificados.
    :type sinNombre: list
    :param sinPuntos: Lista de nombres ingresados no identificados.
    :type sinPuntos: list
    """
    ingresadas = []
    sinNombre = []
    sinPuntos = []

    def __init__(self):
        """Constructor que inicializa la base de datos.
        """
        self.baseDatos()

    def asignacion(self, argumentos):
        """Método para asignar un nombre/puntaje a la lista apropiada.
        Si se da un nombre y puntaje se agrega a ingresadas.
        Si solo se da un nombre se agrega a sinPuntos, viceversa se
        agrega a sinNombre. Si entrada no corresponde a string o int,
        se indica el error y no se agrega.

        :param argumentos: Lista de strings dados en terminal.
        :type argumentos: list
        """
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
        """Método para encontrar coincidencias entre nombres/puntajes dados
        en sinPuntos o sinNombre con alergias en base de datos. Si se encuentra
        una coincidencia se agrega la alergia a ingresadas y se elimina el
        nombre/puntos de las listas sinPuntos/sinNombre.
        En caso de que la alergia ya se encuentre en ingresadas no se duplica.
        """
        " Se copia la lista para poder iterar y modificar. "
        listaSinNombre = [punto for punto in self.sinNombre]
        for punto in listaSinNombre:
            " Si se encuentra coincidencia se elimina y busca si ya se agregó."
            coincide = punto in self.todasAlergias
            if coincide:
                original = self.todasAlergias[punto] not in self.ingresadas
                self.sinNombre.remove(punto)

            " Si coincide y no se ha agregado, se agrega a ingresadas."
            if (coincide) and (original):
                self.ingresadas.append(self.todasAlergias[punto])

        " Se repite el proceso con los nombres en sinPuntos."
        listaSinPuntos = [nombre for nombre in self.sinPuntos]
        for nombre in listaSinPuntos:
            coincide = nombre in self.listaNombres()
            if coincide:
                original = nombre not in self.listaNombres(self.ingresadas)
                self.sinPuntos.remove(nombre)

            if (coincide) and (original):
                " Se crea un diccionario inverso, con name: puntos."
                reverse = {a.name: p for p, a in self.todasAlergias.items()}
                puntos = reverse[nombre]
                self.ingresadas.append(self.todasAlergias[puntos])

    def ingresarAlergia(self):
        """Método para ingresar alergias por terminal.
        Se aceptan entradas hasta que no se den mas entradas.
        Se asigna cada entrada, al tener todas se relacionan con
        la base de datos.
        """
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
        """Método para agregar una alergia a la base de datos.
        Si el nombre/puntaje dado no son de válidos se imprime un error
        y no se agrega.
        """
        print("Ingrese los datos de la alergia a agregar al registro.")
        name = input("Ingrese el nombre: ")
        puntos = input("Ingrese el puntaje (debe ser potencia de 2): ")

        if not puntos.isdigit():
            print("\nERROR: El puntaje dado no es un numero.")
            return
        puntos = int(puntos)

        " Operación bitwise, revisa si un numero es potencia de 2"
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
