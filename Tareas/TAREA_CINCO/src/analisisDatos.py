
def analisisDatos(claseAero):
    try:
        pass
    except Exception as e:
        print(str(e))
        pass


def mostrarAeroDatos(claseAero):
    for aerolinea in claseAero:
        nombre = aerolinea["CARRIER_NAME"].iloc[0]
        print(f"-----Informacion de Aerolinea {nombre}-----")


def cantidadPasajeros(claseAero):
    for aerolinea in claseAero:
        nombre = aerolinea["CARRIER_NAME"].iloc[0]
        pasajeros = aerolinea["PASSENGERS"].sum()
        yield (nombre, pasajeros)


def cantidadVuelos(claseAero):
    for aerolinea in claseAero:
        nombre = aerolinea["CARRIER_NAME"].iloc[0]
        vuelos = aerolinea.shape[0]
        yield (nombre, vuelos)
