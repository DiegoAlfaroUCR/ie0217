"""
Archivo para clase evaluacionGeneral
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


from tiposAlergias import TipoAlergias


class evaluacionGeneral(TipoAlergias):
    """Clase que permite evaluar alergias por medio de alergias registradas.
    Hereda de TipoAlergias el acceso a la base de datos y las listas de
    alergias ingresadas y nombress/puntos no relacionados.

    :param TipoAlergias: Clase de la que hereda.
    :type TipoAlergias: TipoAlergias
    """

    def __init__(self):
        """Constructor que llama constructor de tiposAlergias.
        """
        super().__init__()

    def calcularPuntaje(self):
        """Método para calcular puntaje a partir de lista de
        alergias ingresadas.

        :return: Puntaje de alergia.
        :rtype: int
        """
        puntaje = 0
        for alergia in self.ingresadas:
            puntaje += alergia.puntos
        return puntaje

    def calcularPromedio(self):
        """Método para calcular promedio de alergias identificadas respecto
        a nombres/puntajes no identificados. Se muestra como el porcentaje
        de alergias identificadas.
        """
        cantidadDefinida = len(self.ingresadas)
        cantidadIndef = len(self.sinNombre) + len(self.sinPuntos)
        if (cantidadIndef == 0):
            print("\nPromedio de alergias identificadas: 100%")
        else:
            promedio = cantidadDefinida/(cantidadDefinida + cantidadIndef)*100
            print("\nPromedio de alergias identificadas: %.2f %%" % promedio)

    def mostrarIndefinidos(self):
        """Método para imprimir los nombres y puntajes no identificados.
        """
        if len(self.sinPuntos) != 0:
            print("Alergias sin puntaje conocido:", self.sinPuntos)

        if len(self.sinNombre) != 0:
            print("Resultados Desconocidos:", self.sinNombre)

    def mostrarGeneral(self):
        """Método para mostrar la evaluación general a partir de las alergias
        agregadas. Llama a calcularPuntaje, calcularPromedio
        y mostrarIndefinidos.
        """
        print("\n-----Su Información General-----")
        print("Su puntuación general de alergias:", self.calcularPuntaje())
        print("Las alergias que le afectan: ")
        for alergia in self.ingresadas:
            alergia.mostrar_info()

        self.calcularPromedio()
        self.mostrarIndefinidos()
