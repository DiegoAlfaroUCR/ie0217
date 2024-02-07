import numpy as np
from graficarDatos import linea, barras, pie, histo

"""
Parte 1: Funciones para analizar los datos.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


def analisisTotales(claseAero):
    """Método para hacer el análisis general.

    :param claseAero: Objeto de clase Aerolineas
    :type claseAero: Aerolineas
    :return: Nombre de aerolinea a hacer análisis específico.
    :rtype: str
    """
    print("##### Mostrando datos de cada aerolinea #####\n")
    print("Aerolinea, cantidad pasajeros y cantidad de vuelos:")

    maxVuelos = maxPasajeros = totalVuelos = totalPasajeros = contador = 0
    maxV_Aero = maxP_Aero = None

    # Se obtiene el nombre(n), cantidad de pasajeros(p) y cantidad de vuelos(v)
    # de cada aerolinea.
    for n, p, v in aeroDatos(claseAero):
        # Se muestra los datos de la aerolinea.
        print(f"{n:30} Pasajeros: {p:<10} Vuelos: {v}")
        contador += 1

        # Se encuentra aerolinea con máximo de vuelos.
        if v > maxVuelos:
            maxVuelos = v
            maxV_Aero = n

        # Se encuentra aerolinea con máximo de pasajeros.
        if p > maxPasajeros:
            maxPasajeros = p
            maxP_Aero = n

        # Se encuentra cantidad total de vuelos y pasajeros.
        totalVuelos = totalVuelos + v
        totalPasajeros = totalPasajeros + p

    # Se muestran estadísticas.
    print("\nAerolinea con mayor cantidad de vuelos:",
          f"{maxV_Aero} con {maxVuelos} vuelos.\n",
          f"La cantidad promedio de vuelos fue: {totalVuelos/contador}")

    print("\nAerolinea con mayor cantidad de pasajeros totales:",
          f"{maxP_Aero} con {maxPasajeros} pasajeros.\n",
          f"La cantidad promedio de pasajeros fue {totalPasajeros/contador}")

    # Se retorna la aerolínea con más vuelos para hacerle
    # el análisis específico.
    return maxV_Aero


def aeroDatos(claseAero):
    """Generador que retorna nombre, cantidad de pasajeros y
       cantidad de vuelos de cada aerolinea.

    :param claseAero: Objeto de clase Aerolineas
    :type claseAero: Aerolineas
    :yield: Lista con nombre, pasajeros y vuelos.
    :rtype: list
    """
    for aerolinea in claseAero:
        nombre = aerolinea["CARRIER_NAME"].iloc[0]
        pasajeros = aerolinea["PASSENGERS"].sum()
        vuelos = aerolinea.shape[0]
        yield nombre, pasajeros, vuelos


def analisisEspecifico(datos, maxV_Aero):
    """Método para hacer el análisis específico de una aerolínea.

    :param datos: Datos limpios completos.
    :type datos: DataFrame
    :param maxV_Aero: Nombre de aerolinea a analizar
    :type maxV_Aero: str
    """
    print("\n\nHaciendo análisis específico de aerolinea con más",
          f"vuelos: {maxV_Aero}")

    # Definir datos de la aerolinea.
    aerolinea = datos[datos["CARRIER_NAME"] == maxV_Aero]
    meses = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
             "Agosto", "Septiembre", "Octubre"]
    ciudadesSalida = np.unique(aerolinea["ORIGIN"].to_numpy())
    ciudadesDestino = np.unique(aerolinea["DEST"].to_numpy())

    # Se llama cada tipo de análisis.
    vuelosXmes(aerolinea, meses)
    vuelosXciudad(aerolinea, ciudadesDestino, ciudadesSalida)
    pasajerosXmes(aerolinea, meses)
    pasajerosXvuelos(aerolinea, ciudadesDestino)


def vuelosXmes(aerolinea, meses):
    """Comparar cantidad de vuelos en función del mes.

    :param aerolinea: Información de la aerolinea.
    :type aerolinea: DataFrame
    :param meses: Lista de meses disponibles.
    :type meses: list
    """
    print("\nLos vuelos por mes:")

    # Diccionario {mes: cantidad de vuelos}
    vuelos = {}
    for mes in meses:
        vuelos[mes] = aerolinea[aerolinea["MONTH"] == mes].shape[0]
        print(f"{mes} presentó {vuelos[mes]} vuelos.")

    # Se encuentra el mes con mayor cantidad de vuelos.
    maxV = max(vuelos, key=vuelos.get)
    print("\nMes con mayor cantidad de vuelos:", maxV)

    # Se genera el gráfico.
    linea(vuelos)


def vuelosXciudad(aerolinea, ciudadesDestino, ciudadesSalida):
    """Comparar cnatidad de vuelos en función de la ciudad.

    :param aerolinea: Información de la aerolinea.
    :type aerolinea: DataFrame
    :param ciudadesDestino: Ciudades de destino.
    :type ciudadesDestino: ndarray
    :param ciudadesSalida: Ciudades de salida.
    :type ciudadesSalida: ndarray
    """

    # Se hace un diccionario {ciudad: [vuelosDestino, vuelosSalida]}
    vuelos = {}
    for destino in ciudadesDestino:
        vuelos[destino] = [aerolinea[
            aerolinea["DEST"] == destino].shape[0], 0]

    print("\nLos vuelos por ciudad fueron:")

    for salida in ciudadesSalida:
        vuelos[salida][1] = aerolinea[
            aerolinea["ORIGIN"] == salida].shape[0]
        print(f"{salida} fue destino de {vuelos[salida][0]} vuelos",
              f"y salida de {vuelos[salida][1]} vuelos")

    # Se genera el gráfico.
    barras(vuelos)


def pasajerosXmes(aerolinea, meses):
    """Comparar cantidad de pasajeros en función del mes.

    :param aerolinea: Información de la aerolinea.
    :type aerolinea: DataFrame
    :param meses: Lista de meses disponibles.
    :type meses: list
    """

    print("\nLos pasajeros por mes:")

    # Diccionario {mes: cantidad de pasajeros}
    pasajeros = {}
    for mes in meses:
        mesActual = aerolinea[aerolinea["MONTH"] == mes]
        pasajeros[mes] = mesActual["PASSENGERS"].sum()
        print(f"{mes} presentó {pasajeros[mes]} pasajeros.")

    # Se encuentra el mes con mayor cantidad de pasajeros.
    print("\nMes con mayor cantidad de pasajeros:",
          max(pasajeros, key=pasajeros.get))

    # Se genera el gráfico.
    pie(pasajeros)


def pasajerosXvuelos(aerolinea, ciudadesDestino):
    """Comparar cantidad de vuelos en función de cantidad
       de pasajeros.

    :param aerolinea: Información de la aerolinea.
    :type aerolinea: DataFrame
    :param ciudadesDestino: Ciudades de destino.
    :type ciudadesDestino: ndarray
    """
    print("\nLos pasajeros por cantidad de vuelos en la ciudad:")

    # Diccionario = {cantidad de vuelos: cantidad de pasajeros}
    pasajeros = {}
    for destino in ciudadesDestino:
        destinoActual = aerolinea[aerolinea["DEST"] == destino]
        vuelos = destinoActual.shape[0]
        pasajeros[vuelos] = destinoActual["PASSENGERS"].sum()
        print(f"{vuelos} vuelos trajeron {pasajeros[vuelos]} pasajeros.")

    # Generar el gráfico.
    histo(pasajeros)
