
import timeit
# Este formato de prueba fue tomado de:
# https://www.geeksforgeeks.org/timeit-python-examples/


setup = """
from evaluacionGeneral import evaluacionGeneral
from evaluacionEspecifica import evaluacionEspecifica
from alergia import Alergia

general = evaluacionGeneral()
especifica = evaluacionEspecifica()


# Se agregan las alergias adicionales.
def cincuentaAlergias():
    general.todasAlergias = {}
    archivo = open("src" + r'\' + "Alergias.txt", "r")
    for line in archivo.readlines():
        argumentos = line.split()
        name = argumentos[0]
        puntos = int(argumentos[1].replace('(', '').replace(')', ''))
        general.todasAlergias[puntos] = Alergia(name, puntos)
    archivo.close()
"""

# Prueba para encontrar todas las alergias con 10
prueba10 = """
def prueba10():
    especifica.evaluarAlergias(1000, general.todasAlergias)
"""

# Esta con la cantidad maxima de puntaje de 10 alergias.
prueba10max = """
def prueba10():
    especifica.evaluarAlergias(1000, general.todasAlergias)
"""

# Prueba para encontrar todas las alergias con 50
prueba50 = """
def prueba50():
    cincuentaAlergias()
    especifica.evaluarAlergias(2047, general.todasAlergias)
"""

# Esta con la cantidad maxima de puntaje de 50 alergias.
prueba50max = """
def prueba50():
    cincuentaAlergias()
    especifica.evaluarAlergias(1125899906842623, general.todasAlergias)
"""

print("Tiempo de ejecucion con 10 alergias:")
print("Tiempo para puntaje = 1000: ",
      timeit.timeit(setup=setup, stmt=prueba10, number=10000))
print("Tiempo para puntaje maximo: ",
      timeit.timeit(setup=setup, stmt=prueba10max, number=10000))


print("\nTiempo de ejecucion con 50 alergias:")
print("Tiempo para puntaje = 1000: ",
      timeit.timeit(setup=setup, stmt=prueba50, number=10000))
print("Tiempo para puntaje maximo: ",
      timeit.timeit(setup=setup, stmt=prueba50max, number=10000))
