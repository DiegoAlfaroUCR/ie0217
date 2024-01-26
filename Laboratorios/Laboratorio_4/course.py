class Course:
    # Inicializador de Course, establece código y nombre de curso.
    def __init__(self, course_code, course_name):
        self.course_code = course_code
        self.course_name = course_name

    # Método para imprimir información.
    # Como esta clase no hereda solo es un print.
    def display_info(self):
        print(f"Course code: {self.course_code}\
              \nCourse name: {self.course_name}\n")
