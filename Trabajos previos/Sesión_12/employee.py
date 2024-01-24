# Se define la clase employee.
class Employee:
    # Se le asigna un atributo de identificacion.
    employee_id = 0

# Se crean dos objetos de clase Employee
employee1 = Employee()
employee2 = Employee()

# Se inicializan e imprimen los atributos de las clases.
# Note que la variable usada no es del mismo nombre que el atributo
# esto lo que hace es crear un atributo nuevo llamado employeeID y lo inicializa.
employee1.employeeID = 1001
print(f"Employee ID: {employee1.employeeID}")

employee2.employeeID = 1002
print(f"Employee ID: {employee2.employeeID}")