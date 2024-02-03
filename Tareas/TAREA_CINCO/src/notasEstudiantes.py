import numpy as np


class estudiante():
    calificaciones = {}
    asignaturas = ["Fisica", "Matematica", "Quimica", "Biologia", "Español"]

    def __init__(self):
        self.crearCalificaciones()

    def crearCalificaciones(self):
        for i in range(5):
            asignatura = self.asignaturas[i]
            notas = np.random.randint(0, 100, 5)
            self.calificaciones[asignatura] = notas


estudiante1 = estudiante()
estudiante2 = estudiante()
estudiante3 = estudiante()
estudiante4 = estudiante()
estudiante5 = estudiante()

for x in estudiante1.calificaciones["Fisica"]:
    print(x)
