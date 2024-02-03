import numpy as np

asignaturas = ["Fisica", "Matematica", "Quimica", "Biologia", "Español"]

NUM_ASIGNATURAS = 5
NUM_ESTUDIANTES = 5
NUM_NOTAS = 5


class Estudiante():
    calificaciones = np.empty((NUM_ASIGNATURAS, NUM_NOTAS))

    def __init__(self):
        self.crearCalificaciones()

    def crearCalificaciones(self):
        for asignatura in range(NUM_ASIGNATURAS):
            notas = np.random.randint(0, 100, 5)
            self.calificaciones[asignatura] = notas


def calcularPromedios(calificaciones):
    promedios = np.empty((NUM_ASIGNATURAS, 1))
    for asignatura in range(NUM_ASIGNATURAS):
        promedio = np.mean(calificaciones[asignatura])
        promedios[asignatura] = promedio
    return promedios


def calcularMaxima(calificaciones):
    max = 0
    for notas in calificaciones:
        if np.max(notas) > max:
            max = np.max(notas)
    return max


def sumaNotas(calificaciones):
    sumas = np.empty((NUM_ASIGNATURAS, 1))
    for asignatura in range(NUM_ASIGNATURAS):
        suma = np.sum(calificaciones[asignatura])
        sumas[asignatura] = suma
    return sumas


notasEstudiantes = np.empty((NUM_ESTUDIANTES, NUM_ASIGNATURAS, NUM_NOTAS))
promediosEstudiantes = np.empty((NUM_ESTUDIANTES, NUM_ASIGNATURAS, 1))
maximasEstudiantes = np.empty((NUM_ESTUDIANTES, 1))
sumasEstudiantes = np.empty((NUM_ESTUDIANTES, NUM_ASIGNATURAS, 1))

for i in range(NUM_ESTUDIANTES):
    unEstudiante = Estudiante()
    notasEstudiantes[i] = unEstudiante.calificaciones
    promediosEstudiantes[i] = calcularPromedios(notasEstudiantes[i])
    maximasEstudiantes[i] = calcularMaxima(notasEstudiantes[i])
    sumasEstudiantes[i] = sumaNotas(notasEstudiantes[i])

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
