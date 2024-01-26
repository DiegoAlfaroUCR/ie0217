# Se importan las clases creadas.
from student import Student
from teacher import Teacher
from course import Course

# Cada vez que se crea un objeto se le pasan los argumentos

# Se crean estudiantes.
student1 = Student("Esteban", 43, "B30754")
student2 = Student("Maria", 28, "B35149")

# Se crean profesores.
teacher1 = Teacher("Jorge Romero", 65, "123456")
teacher2 = Teacher("Luis Diego Marin", 61, "55555")

# Se crean los cursos.
course1 = Course("IE0217", "DSA")
course2 = Course("IE0323", "CD1")

# Se matricula un estudiante a un curso.
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)

# Se asignaa un profesor a un curso.
teacher1.assign_course(course1.course_code)
teacher2.assign_course(course2.course_code)

# Se muestra la información de algunos objetos.
student1.display_info()

teacher1.display_info()

course1.display_info()
