from generarCSV import obtenerDatos
from regression import precioXaño, kilometrajeXaño
from clustering import generarClusters


datos = obtenerDatos()
precioXaño(datos)
kilometrajeXaño(datos)
generarClusters(datos)
