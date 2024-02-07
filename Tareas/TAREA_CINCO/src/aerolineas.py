"""
Parte 1: Clase Aerolineas.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


class Aerolineas:
    """Clase para iterar cada aerolinea de los datos guardados.
    """
    def __init__(self, datos):
        """Constructor que guarda los datos de las aerolineas.

        :param datos: Datos limpios completos.
        :type datos: DataFrame
        """
        self.carriers = datos["UNIQUE_CARRIER"].unique()
        self.max = len(self.carriers) - 1
        self.datos = datos

    def __iter__(self):
        """Crear un iterador para objeto Aerolineas.

        :return: El objeto con el contador inicializado.
        :rtype: Aerolineas
        """
        self.i = 0
        return self

    def __next__(self):
        """Iterar objeto Aerolineas por medio de iterador.

        :raises StopIteration: En caso donde se acaben los elementos.
        :return: Datos pertenecientes a una aerolinea.
        :rtype: DataFrame
        """
        if self.i <= self.max:
            unique = self.carriers[self.i]
            aerolinea = self.datos[self.datos["UNIQUE_CARRIER"] == unique]
            self.i += 1
            return aerolinea
        else:
            # Manejo de errores.
            raise StopIteration
