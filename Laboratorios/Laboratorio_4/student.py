from person import Person


class Student(Person):
    # Inicializador de nueva clase
    def __init__(self, name, age, student_id):
        # Se llama el init de clase base (Person)
        super().__init__(name, age)
        self.student_id = student_id
        self.courses = []

    # Método para agregar un curso a lista de cursos
    def enroll_course(self, course):
        self.courses.append(course)

    # Método para mostrar información del estudiante.
    def display_info(self):
        # Se llama el display de Person
        super().display_info()

        # Se agrega \ para continuar lo del print debajo.
        # Se imprime con formato y usando join para incluir los cursos
        # en el string.
        print(f"Student ID: {self.student_id}\
              \nCourses: {", ".join(self.courses)}\n")
