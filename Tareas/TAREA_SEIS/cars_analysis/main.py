from generarCSV import obtenerDatos
from regression import precioXaño, kilometrajeXaño
from clustering import generarClusters

"""
Parte Práctica: Archivo main.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""

# Se obtienen los datos y se llaman los análisis.
datos = obtenerDatos()
precioXaño(datos)
kilometrajeXaño(datos)
generarClusters(datos)
