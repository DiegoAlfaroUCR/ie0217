
import timeit
import cProfile
from evaluacionGeneral import evaluacionGeneral
from evaluacionEspecifica import evaluacionEspecifica


# Este setup es para el uso de cProfile
gen = evaluacionGeneral()
esp = evaluacionEspecifica()
gen.ingresadas = [gen.todasAlergias[x] for x in [1, 2, 4, 8, 256]]
gen.sinNombre = [x for x in range(0, 500)]
gen.sinPuntos = ['huevos', 'a', 'b', 'gatos', 'c', 'd', 'mariscos', 'tomates',
                 'e', 'f', 'g', 'h', 'i']


# Este formato de prueba fue tomado de:
# https://www.geeksforgeeks.org/timeit-python-examples/

print("##### Análisis con 100000 repeticiones de algunos métodos #####\n")

setup = """
from evaluacionGeneral import evaluacionGeneral
from evaluacionEspecifica import evaluacionEspecifica
from alergia import Alergia

gen = evaluacionGeneral()
esp = evaluacionEspecifica()


# Se agregan las alergias adicionales.
def cincuentaAlergias():
    gen.todasAlergias = {}
    archivo = open("src" + r'\' + "Alergias.txt", "r")
    for line in archivo.readlines():
        argumentos = line.split()
        name = argumentos[0]
        puntos = int(argumentos[1].replace('(', '').replace(')', ''))
        gen.todasAlergias[puntos] = Alergia(name, puntos)
    archivo.close()

gen.ingresadas = [gen.todasAlergias[x] for x in [1, 2, 4, 8, 256]]
gen.sinNombre = [x for x in range(0, 500)]
gen.sinPuntos = ['huevos', 'a', 'b', 'gatos', 'c', 'd', 'mariscos', 'tomates',
                 'e', 'f', 'g', 'h', 'i']
"""

# Prueba para encontrar todas las alergias con 10
prueba10 = """
def prueba10():
    esp.evaluarAlergias(1000, gen.todasAlergias)
"""

# Esta con la cantidad maxima de puntaje de 10 alergias.
prueba10max = """
def prueba10():
    esp.evaluarAlergias(1000, gen.todasAlergias)
"""

# Prueba para encontrar todas las alergias con 50
prueba50 = """
def prueba50():
    cincuentaAlergias()
    esp.evaluarAlergias(2047, gen.todasAlergias)
"""

# Esta con la cantidad maxima de puntaje de 50 alergias.
prueba50max = """
def prueba50():
    cincuentaAlergias()
    esp.evaluarAlergias(1125899906842623, gen.todasAlergias)
"""

print("-----Análisis de evaluarAlergias-----")

print("Análisis con timeit.")
print("Tiempo de ejecucion con 10 alergias:")
print("Tiempo para puntaje = 1000: ",
      timeit.timeit(setup=setup, stmt=prueba10, number=100000))
print("Tiempo para puntaje maximo: ",
      timeit.timeit(setup=setup, stmt=prueba10max, number=100000))


print("\nTiempo de ejecucion con 50 alergias:")
print("Tiempo para puntaje = 1000: ",
      timeit.timeit(setup=setup, stmt=prueba50, number=100000))
print("Tiempo para puntaje maximo: ",
      timeit.timeit(setup=setup, stmt=prueba50max, number=100000))


print("\nAnálisis con cProfile y puntaje 9999999999999999999999.")
cProfile.run('esp.evaluarAlergias(9999999999999999999999, gen.todasAlergias)')


print("-----Análisis de relacionar-----")

relacionar = """
gen.relacionar()
"""
print("Tiempo para relacionar con listas grandes: ",
      timeit.timeit(setup=setup, stmt=relacionar, number=100000))

print("\nAnálisis con cProfile.")
cProfile.run('gen.relacionar()')
