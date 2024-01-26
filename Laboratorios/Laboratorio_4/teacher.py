from person import Person


class Teacher(Person):
    # Inicializador de Teacher, también recibe employee id.
    def __init__(self, name, age, employee_id):
        # Se llama init de Person
        super().__init__(name, age)
        self.employee_id = employee_id
        self.courses_taught = []

    # Método para asignar cursos enseñados a la lista.
    def assign_course(self, course):
        self.courses_taught.append(course)

    # Método que muestra la información del profesor.
    def display_info(self):
        # Se llama display info de Person.
        super().display_info()
        # Se vuelve a hacer un print con mismo formato que en student.py
        print(f"Employee ID: {self.employee_id}\
              \nCourses taught: {', '.join(self.courses_taught)}\n")
