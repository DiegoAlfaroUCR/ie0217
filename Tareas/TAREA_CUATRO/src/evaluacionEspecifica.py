"""
Archivo para clase evaluacionEspecifica
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


from alergia import Alergia


class evaluacionEspecifica(Alergia):
    """Clase que permite evaluar por medio de puntaje de alergia dado.
    Hereda de alergia para tener acceso a los métodos, atributos de
    las alergias.

    :param Alergia: Clase base.
    :type Alergia: Alergia
    """
    def __init__(self):
        """Constructor vacío para no llamar constructor
        de Alergia.
        """
        pass

    def retornarPuntos(self, numero):
        """Método para retornar puntajes de alergia que
        componen un puntaje ingresado. Convierte el número en binario
        y por cada posición de bit 1, se guarda al entero equivalente
        que generaría dicha posición de bit. Se retorna la lista de
        todos los enteros componentes.

        El algoritmo obtiene el bit más grande, lo guarda y lo resta
        al binario. Se continúa el algoritmo hasta que el binario sea 0.

        :param numero: Puntaje ingresado por usuario.
        :type numero: int
        :return: Lista de puntajes que componen el ingresado.
        :rtype: list
        """
        "Se convierte a binario con tipo entero."
        numeroBinario = int(format(numero, 'b'))
        listaPuntos = []

        while numeroBinario != 0:
            " Se consigue el bit más grande maximo."
            numCeros = len(str(numeroBinario)) - 1
            maximo = (10)**(numCeros)
            " Se agrega a lista de puntos y se resta al binaro."
            listaPuntos.append(int(str(maximo), 2))
            numeroBinario -= maximo
        return listaPuntos

    def encontrarAlergias(self, puntajesPosibles, todasAlergias):
        """Método para encontrar alergias correspondientes a puntajes.
        Se usan los puntajes dados de retornarPuntos y se retorna lista
        de alergias que coinciden con los puntajess dados.

        :param puntajesPosibles: Lista de puntajes de alergia.
        :type puntajesPosibles: list
        :param todasAlergias: Base de datos de alergias.
        :type todasAlergias: dict
        :return: Lista de alergias relacionadas a punajesPosibles.
        :rtype: list
        """
        encontradas = []
        for puntos in puntajesPosibles:
            if puntos in todasAlergias:
                encontradas.append(todasAlergias[puntos])
        return encontradas

    def evaluarAlergias(self, puntuacion, todasAlergias):
        """Método para retornar lista de alergias relacionadas a
        un puntaje de alergia ingresado. Junta métodos retornarPuntos
        y encontrarAlergias.

        :param puntuacion: Puntaje de alergia dado.
        :type puntuacion: int
        :param todasAlergias: Base de datos de alergias.
        :type todasAlergias: dict
        :return: Lista de alergias relacionadas a punajesPosibles.
        :rtype: list
        """

        puntajesPosibles = self.retornarPuntos(puntuacion)
        encontradas = self.encontrarAlergias(puntajesPosibles, todasAlergias)
        return encontradas

    def infoUsuario(self, todasAlergias):
        """Método para pedir una puntuacion de alergia e imprimir
        las alergias relacionadas a dicha puntuacion. Llama método
        evaluarAlergias y mostrar_info para cada Alergia.

        :param todasAlergias: Base de datos de alergias.
        :type todasAlergias: dict
        """
        puntuacion = int(input("\nIngrese su puntuacion de alergia: "))
        evaluadas = self.evaluarAlergias(puntuacion, todasAlergias)
        print("\n-----Su Informacion Específica-----")
        print("Su puntuacion de alergia:", puntuacion)
        print("Las alergias a las que es suceptible: ")
        for alergia in evaluadas:
            alergia.mostrar_info()
