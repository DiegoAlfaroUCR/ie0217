import numpy as np


def analisisTotales(claseAero):
    print("##### Mostrando datos de cada aerolinea #####\n")
    print("Aerolinea, cantidad pasajeros y cantidad de vuelos:")

    maxVuelos = maxPasajeros = totalVuelos = totalPasajeros = contador = 0
    maxV_Aero = maxP_Aero = None

    for n, p, v in aeroDatos(claseAero):
        # Se muestra los datos de la aerolinea.
        # print(f"{n:30} Pasajeros: {p:<10} Vuelos: {v}")
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

    print("\nAerolinea con mayor cantidad de vuelos:",
          f"{maxV_Aero} con {maxVuelos} vuelos.\n",
          f"La cantidad promedio de vuelos fue: {totalVuelos/contador}")

    print("\nAerolinea con mayor cantidad de pasajeros totales:",
          f"{maxP_Aero} con {maxPasajeros} pasajeros.\n",
          f"La cantidad promedio de pasajeros fue {totalPasajeros/contador}")

    return maxV_Aero


def aeroDatos(claseAero):
    for aerolinea in claseAero:
        nombre = aerolinea["CARRIER_NAME"].iloc[0]
        pasajeros = aerolinea["PASSENGERS"].sum()
        vuelos = aerolinea.shape[0]
        yield nombre, pasajeros, vuelos


def analisisEspecifico(datos, maxV_Aero):
    # print("\n\nHaciendo análisis específico de aerolinea con más",
    #       f"vuelos: {maxV_Aero}")
    aerolinea = datos[datos["CARRIER_NAME"] == maxV_Aero]
    meses = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
             "Agosto", "Septiembre", "Octubre"]
    ciudadesSalida = np.unique(aerolinea["ORIGIN_CITY_NAME"].to_numpy())
    ciudadesDestino = np.unique(aerolinea["DEST_CITY_NAME"].to_numpy())
    vuelosXmes(aerolinea, meses)
    vuelosXciudad(aerolinea, ciudadesDestino, ciudadesSalida)
    pasajerosXmes(aerolinea, meses)
    pasajerosXciudad(aerolinea, ciudadesDestino)


def vuelosXmes(aerolinea, meses):
    # print("\nLos vuelos por mes:")
    vuelos = {}
    for mes in meses:
        vuelos[mes] = aerolinea[aerolinea["MONTH"] == mes].shape[0]
        # print(f"{mes} presentó {vuelos[mes]} vuelos.")


def vuelosXciudad(aerolinea, ciudadesDestino, ciudadesSalida):
    # print("\nLos vuelos por ciudad de destino:")
    vuelosD = {}
    vuelosS = {}
    for destino in ciudadesDestino:
        vuelosD[destino] = aerolinea[
            aerolinea["DEST_CITY_NAME"] == destino].shape[0]
        # print(f"{destino} fue destino de {vuelosD[destino]} vuelos.")

    # print("\nLos vuelos por ciudad de salida:")
    for salida in ciudadesSalida:
        vuelosS[salida] = aerolinea[
            aerolinea["ORIGIN_CITY_NAME"] == salida].shape[0]
        # print(f"{salida} fue salida de {vuelosS[salida]} vuelos.")


def pasajerosXmes(aerolinea, meses):
    # print("\nLos pasajeros por mes:")
    pasajeros = {}
    for mes in meses:
        mesActual = aerolinea[aerolinea["MONTH"] == mes]
        pasajeros[mes] = mesActual["PASSENGERS"].sum()
        # print(f"{mes} presentó {pasajeros[mes]} pasajeros.")


def pasajerosXciudad(aerolinea, ciudadesDestino):
    # print("\nLos pasajeros por ciudad de destino:")
    pasajeros = {}
    for destino in ciudadesDestino:
        destinoActual = aerolinea[aerolinea["DEST_CITY_NAME"] == destino]
        pasajeros[destino] = destinoActual["PASSENGERS"].sum()
        # print(f"{destino} trajo {pasajeros[destino]} pasajeros.")
