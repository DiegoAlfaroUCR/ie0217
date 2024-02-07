from obtencionDatos import obtenerDatos
from aerolineas import Aerolineas
from analisisDatos import analisisTotales, analisisEspecifico

"""
Parte 1: Archivo main para iniciar programa.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""

# Se leen los datos.
datos = obtenerDatos("src/T_T100D_MARKET_ALL_CARRIER.csv")

# Se crea objeto aerolineas.
inst = Aerolineas(datos)

# Se hace análisis general.
max = analisisTotales(inst)

# Se hace análisis específico.
analisisEspecifico(datos, max)
