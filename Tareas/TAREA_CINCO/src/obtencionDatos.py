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
                  "ORIGIN",
                  "ORIGIN_CITY_NAME",
                  "DEST",
                  "DEST_CITY_NAME",
                  "YEAR",
                  "MONTH",
                  ]]

    # Se eliminan entradas que tengan valores Nulos/NaN:
    limpios = utiles[utiles["PASSENGERS"].notna() |
                     utiles["YEAR"].notna() |
                     utiles["MONTH"].notna()]

    # Se convierten datos al formato requerido:
    limpios["PASSENGERS"] = limpios["PASSENGERS"].astype('int')

    return limpios
