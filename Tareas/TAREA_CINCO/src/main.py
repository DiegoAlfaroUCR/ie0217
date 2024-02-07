from obtencionDatos import obtenerDatos
from aerolineas import Aerolineas
from analisisDatos import analisisTotales, analisisEspecifico


datos = obtenerDatos("src/T_T100D_MARKET_ALL_CARRIER.csv")
inst = Aerolineas(datos)
max = analisisTotales(inst)
analisisEspecifico(datos, max)
