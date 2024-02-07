import numpy as np
from graficarDatos import linea, barras, pie, histo


def analisisTotales(claseAero):
    print("##### Mostrando datos de cada aerolinea #####\n")
    print("Aerolinea, cantidad pasajeros y cantidad de vuelos:")

    maxVuelos = maxPasajeros = totalVuelos = totalPasajeros = contador = 0
    maxV_Aero = maxP_Aero = None

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
    print("\n\nHaciendo análisis específico de aerolinea con más",
          f"vuelos: {maxV_Aero}")
    aerolinea = datos[datos["CARRIER_NAME"] == maxV_Aero]
    meses = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
             "Agosto", "Septiembre", "Octubre"]
    ciudadesSalida = np.unique(aerolinea["ORIGIN"].to_numpy())
    ciudadesDestino = np.unique(aerolinea["DEST"].to_numpy())

    vuelosXmes(aerolinea, meses)
    vuelosXciudad(aerolinea, ciudadesDestino, ciudadesSalida)
    pasajerosXmes(aerolinea, meses)
    pasajerosXvuelos(aerolinea, ciudadesDestino)


def vuelosXmes(aerolinea, meses):
    print("\nLos vuelos por mes:")
    vuelos = {}
    for mes in meses:
        vuelos[mes] = aerolinea[aerolinea["MONTH"] == mes].shape[0]
        print(f"{mes} presentó {vuelos[mes]} vuelos.")

    maxV = max(vuelos, key=vuelos.get)
    print("\nMes con mayor cantidad de vuelos:", maxV)
    linea(vuelos)


def vuelosXciudad(aerolinea, ciudadesDestino, ciudadesSalida):
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

    barras(vuelos)


def pasajerosXmes(aerolinea, meses):
    print("\nLos pasajeros por mes:")
    pasajeros = {}
    for mes in meses:
        mesActual = aerolinea[aerolinea["MONTH"] == mes]
        pasajeros[mes] = mesActual["PASSENGERS"].sum()
        print(f"{mes} presentó {pasajeros[mes]} pasajeros.")

    print("\nMes con mayor cantidad de pasajeros:",
          max(pasajeros, key=pasajeros.get))
    pie(pasajeros)


def pasajerosXvuelos(aerolinea, ciudadesDestino):
    print("\nLos pasajeros por cantidad de vuelos en la ciudad:")
    pasajeros = {}
    for destino in ciudadesDestino:
        destinoActual = aerolinea[aerolinea["DEST"] == destino]
        vuelos = destinoActual.shape[0]
        pasajeros[vuelos] = destinoActual["PASSENGERS"].sum()
        print(f"{vuelos} vuelos trajeron {pasajeros[vuelos]} pasajeros.")
    histo(pasajeros)
