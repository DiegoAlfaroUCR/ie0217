import pandas as pd
from generarCSV import generarCSV
from regression import precioXaño, kilometrajeXaño


def obtenerDatos():
    # Se leen los datos del csv descargado.
    raw = pd.read_csv("CAR DETAILS FROM CAR DEKHO.csv")

    # Se sacan categorias útiles.
    utiles = raw[["selling_price", "year", "km_driven"]]

    # Se limpian valores NaN/Nulos.
    limpios = utiles[utiles["selling_price"].notna() |
                     utiles["year"].notna() |
                     utiles["km_driven"].notna()]

    return limpios


generarCSV()
datos = obtenerDatos()
precioXaño(datos)
kilometrajeXaño(datos)
