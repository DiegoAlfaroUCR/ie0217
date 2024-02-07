import pandas as pd
import os


def obtenerDatos(archivo):
    print(f"Cargando datos de {archivo}...")
    try:
        os.chdir('src/')        # Hay que revisar en linux.
        raw = pd.read_csv(archivo)
        return limpiar(raw)

    except Exception as e:
        print(f"Ocurrió un error al leer {archivo}: {str(e)}")


def limpiar(raw):
    # Se escogen las categorias útiles solamente:
    utiles = raw[["PASSENGERS",
                  "UNIQUE_CARRIER",
                  "CARRIER_NAME",
                  "ORIGIN_CITY_NAME",
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
