import requests
import os
from requests.auth import HTTPBasicAuth
from zipfile import ZipFile
import pandas as pd


def generarCSV():
    # Se sale si el csv ya existe.
    if os.path.isfile("cars_analysis\\CAR DETAILS FROM CAR DEKHO.csv"):
        return

    # Credenciales
    username = "daas0204"
    key = "392b33bdd8c0f9858613f4e855bce25e"

    # Path de descarga temporal
    path = "datos.zip"

    """
    URL de descarga.
    Este URL se encontró al navegar la opción de descargar metadata en forma
    de JSON en:
    https://www.kaggle.com/datasets/akshaydattatraykhare/car-details-dataset
    Dentro de esta opción se encontró la opción de distribution que contiene
    los datos del contenido a descargar, dentro de la cual se da el link.

    El link de descarga está manejado en formato JSON y requiere credenciales
    para la descarga del zip.
    """
    url = "https://www.kaggle.com/api/v1/datasets/download/akshaydattatraykhare/car-details-dataset"

    # Se obtiene respuesta con la autorización correcta.
    response = requests.get(url, auth=HTTPBasicAuth(username, key))

    # Se escribe a un archivo .zip.
    with open(path, 'wb') as f:
        f.write(response.content)
    f.close()

    # Se extrae el archivo.
    with ZipFile(path, 'r') as zip_ref:
        zip_ref.extractall("cars_analysis")

    # Se remueve el .zip
    os.remove(path)


def obtenerDatos():
    # Se genera el CSV si no existe.
    generarCSV()

    # Se leen los datos del csv descargado.
    raw = pd.read_csv("cars_analysis\\CAR DETAILS FROM CAR DEKHO.csv")

    # Se sacan categorias útiles.
    utiles = raw[["selling_price", "year", "km_driven"]]

    # Se limpian valores NaN/Nulos.
    limpios = utiles[utiles["selling_price"].notna() |
                     utiles["year"].notna() |
                     utiles["km_driven"].notna()]

    return limpios
