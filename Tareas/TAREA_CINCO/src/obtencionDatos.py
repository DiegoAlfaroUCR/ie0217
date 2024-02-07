import pandas as pd

"""
Parte 1: Funciones para obtener datos del csv.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


def obtenerDatos(archivo):
    """Guardar datos de un csv a un DataFrame

    :param archivo: Dirección del csv
    :type archivo: str
    :return: Datos en un DataFrame
    :rtype: DataFrame
    """
    print(f"Cargando datos de {archivo}...")

    # Manejo de errores.
    try:
        raw = pd.read_csv(archivo)
        return limpiar(raw)

    except Exception as e:
        print(f"Ocurrió un error al leer {archivo}: {str(e)}")


def limpiar(raw):
    """Filtrar y limpiar los datos leidos.

    :param raw: Datos crudos.
    :type raw: DataFrame
    :return: Datos limpiados.
    :rtype: DataFrame
    """
    # Se escogen las categorias útiles solamente:
    utiles = raw[["PASSENGERS",
                  "UNIQUE_CARRIER",
                  "CARRIER_NAME",
                  "ORIGIN",
                  "ORIGIN_CITY_NAME",
                  "DEST",
                  "DEST_CITY_NAME",
                  "MONTH",
                  ]]

    # Se eliminan entradas que tengan valores Nulos/NaN:
    limpios = utiles[utiles["PASSENGERS"].notna() |
                     utiles["MONTH"].notna()]

    # Se convierten datos al formato requerido:

    # Convertir la cantidad de pasajeros a entero, no float.
    limpios["PASSENGERS"] = limpios["PASSENGERS"].astype('int')

    # Se acortan los nombres de pasajeros.
    limpios["CARRIER_NAME"] = limpios["CARRIER_NAME"].str.split(",").str[0]
    limpios["CARRIER_NAME"] = limpios["CARRIER_NAME"].str.split("/").str[0]

    # Se pasan los meses al nombre del mes, no un número.
    limpios["MONTH"] = limpios["MONTH"].astype(str)
    meses = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
             "Agosto", "Septiembre", "Octubre"]

    for num in range(1, 11):
        limpios.loc[limpios["MONTH"] == str(num), "MONTH"] = meses[num - 1]

    return limpios
