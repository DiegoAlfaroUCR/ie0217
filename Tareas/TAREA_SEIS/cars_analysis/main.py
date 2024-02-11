import pandas as pd
from regression import precioXaño


def obtenerDatos():
    # De momento se lee del csv descargado.
    raw = pd.read_csv("cars_analysis\\CAR DETAILS FROM CAR DEKHO.csv")

    # Se sacan categorias útiles.
    utiles = raw[["selling_price", "year", "km_driven"]]

    # Se limpian valores NaN/Nulos.
    limpios = utiles[utiles["selling_price"].notna() |
                     utiles["year"].notna() |
                     utiles["km_driven"].notna()]

    return limpios


datos = obtenerDatos()
precioXaño(datos)
