"""
Archivo para clase Alergia
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


class Alergia:
    """Clase que representa una alergia, es la base del programa.

    :param todasAlergias: Base de datos de alergias.
    :type todasAlergias: dict
    """

    todasAlergias = {}

    def __init__(self, name, puntos):
        """Constructor de Alergia

        :param name: Nombre de la alergia.
        :type name: string
        :param puntos: Puntaje correspondiente a la alergia.
        :type puntos: int
        """
        self.name = name
        self.puntos = puntos

    def mostrar_info(self, Todas=False):
        """Método para mostrar información de una alergia o
        de todas las alergias de la base de datos. Si se da una
        bandera True como argumento se muestra la información de toda
        la base de datos.

        :param Todas: Bandera para imprimir base de datos, defaults to False
        :type Todas: bool, optional
        """
        if Todas is not False:
            print("\n-----Mostrando informacion de todas las alergias-----\n")
            for alergia in self.todasAlergias.values():
                alergia.mostrar_info()
        else:
            print(f"Nombre: {self.name}, Puntuacion: {self.puntos}")

    def baseDatos(self):
        """Método para agregar las alergias iniciales a la
        base de datos.
        """
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
        """Método para retornar lista de nombres de un conjunto.
        Si se da una lista como argumento se retorna una lista de los nombres
        de dicha lista. Si no se da se retorna la lista de nombres en la base
        de datos.

        :param listaAlergias: Lista de alergias por mostrar, defaults to None
        :type listaAlergias: list
        :return: Lista de nombres de listaAlergias o todasAlergias
        :rtype: list
        """
        if listaAlergias is not None:
            return [alergia.name for alergia in listaAlergias]
        return [self.todasAlergias[x].name for x in self.todasAlergias]
