import numpy as np

"""
Archivo para parte 2 de la tarea.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""

# Parámetros que definen al output. Se pueden modificar de forma
# global desde aquí, permitiendo reproducir resultados diferentes.
asignaturas = ["Fisica", "Matematica", "Quimica", "Biologia", "Español"]

NUM_ASIGNATURAS = 5
NUM_ESTUDIANTES = 5
NUM_NOTAS = 5


class Estudiante():
    """ Clase que representa a un estudiante, genera las calificaciones de
        este.
        :param calificaciones: Matriz con las calificaciones.
        :type calificaciones: ndarray
    """
    calificaciones = np.empty((NUM_ASIGNATURAS, NUM_NOTAS))

    def __init__(self):
        """ Constructor que llama a crearCalificaciones.
        """
        self.crearCalificaciones()

    def crearCalificaciones(self):
        """ Construye las calificaciones por la cantidad de asginaturas.
            Se usa np.random para crear las notas de forma
            aleatoria de 0 a 100.
        """
        for asignatura in range(NUM_ASIGNATURAS):
            notas = np.random.randint(0, 100, NUM_NOTAS)
            self.calificaciones[asignatura] = notas


def calcularPromedios(calificaciones):
    """ Calcula los promedios de cada asignatura de cada estudiante.

    :param calificaciones: Matirz de calificaciones del estudiante.
    :type calificaciones: ndarray
    :return: Array de promedios.
    :rtype: ndarray
    """
    promedios = np.empty((NUM_ASIGNATURAS, 1))
    for asignatura in range(NUM_ASIGNATURAS):
        promedio = np.mean(calificaciones[asignatura])
        promedios[asignatura] = promedio
    return promedios


def calcularMaxima(calificaciones):
    """ Calcula la nota máxima de un estudiante

    :param calificaciones: Matirz de calificaciones del estudiante.
    :type calificaciones: ndarray
    :return: Nota máxima.
    :rtype: int
    """
    max = 0
    for notas in calificaciones:
        if np.max(notas) > max:
            max = np.max(notas)
    return max


def sumaNotas(calificaciones):
    """ Calcula suma de notas dadas.

    :param calificaciones: Matirz de calificaciones del estudiante.
    :type calificaciones: ndarray
    :return: Array con sumas de notas.
    :rtype: ndarray
    """
    sumas = np.empty((NUM_ASIGNATURAS, 1))
    for asignatura in range(NUM_ASIGNATURAS):
        suma = np.sum(calificaciones[asignatura])
        sumas[asignatura] = suma
    return sumas


# Se incializan arrays de con info de todos los estudiantes.

notasEstudiantes = np.empty((NUM_ESTUDIANTES, NUM_ASIGNATURAS, NUM_NOTAS))
promediosEstudiantes = np.empty((NUM_ESTUDIANTES, NUM_ASIGNATURAS, 1))
maximasEstudiantes = np.empty((NUM_ESTUDIANTES, 1))
sumasEstudiantes = np.empty((NUM_ESTUDIANTES, NUM_ASIGNATURAS, 1))

# Se itera por cada estudiante y se calculan sus promedios, maximos
# y sumas de notas.
for i in range(NUM_ESTUDIANTES):
    unEstudiante = Estudiante()
    notasEstudiantes[i] = unEstudiante.calificaciones
    promediosEstudiantes[i] = calcularPromedios(notasEstudiantes[i])
    maximasEstudiantes[i] = calcularMaxima(notasEstudiantes[i])
    sumasEstudiantes[i] = sumaNotas(notasEstudiantes[i])

# Se muestra la información de forma ordenada.
print("-----Se muestra información de cada estudiante-----")
for estudiante in range(NUM_ESTUDIANTES):
    print('\n'+"-"*70, f"\nEstudiante {estudiante + 1}:")
    print(f"Calificaciones por materia: {'':9s} Promedios:    Suma de notas:")
    for i in range(NUM_ASIGNATURAS):
        print(f"{asignaturas[i]:11s}: {notasEstudiantes[estudiante][i]}",
              f"{'':3s}{promediosEstudiantes[estudiante][i]}",
              f"{'':7s}{sumasEstudiantes[estudiante][i]}")
    print(f"\nNota máxima obtenida: {maximasEstudiantes[estudiante]}")
    print("-"*70)
