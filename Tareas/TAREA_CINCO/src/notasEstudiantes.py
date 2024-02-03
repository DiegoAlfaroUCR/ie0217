import numpy as np

# asignaturas = ["Fisica", "Matematica", "Quimica", "Biologia", "Español"]

ASIGNATURAS = NUM_ESTUDIANTES = 5


class Estudiante():
    calificaciones = np.empty((5, 5))
    promedios = np.empty((5, 1))

    def __init__(self):
        self.crearCalificaciones()
        self.calcularPromedios()

    def crearCalificaciones(self):
        for asignatura in range(ASIGNATURAS):
            notas = np.random.randint(0, 100, 5)
            self.calificaciones[asignatura] = notas

    def calcularPromedios(self):
        for asignatura in range(ASIGNATURAS):
            promedio = np.mean(self.calificaciones[asignatura])
            self.promedios[asignatura] = promedio


notasEstudiantes = np.empty((5, 5, 5))
promediosEstudiantes = np.empty((5, 5, 1))

for i in range(NUM_ESTUDIANTES):
    unEstudiante = Estudiante()
    notasEstudiantes[i] = unEstudiante.calificaciones
    promediosEstudiantes[i] = unEstudiante.promedios
