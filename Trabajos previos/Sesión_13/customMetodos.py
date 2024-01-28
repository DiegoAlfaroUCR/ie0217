
# Se crea una clase de excepcion con un método
class SalaryNotInRangeError(Exception):
    # Información de la excepción:
    """Exception raised for errors in the input salary.

    Attributes:
        salary -- input salary which caused the error
        message -- explanation of the error
    """

    # Constructor que crea un mensaje para imprimir por medio de excepcion.
    # Además guarda el salario que generó el error en la clase.
    def __init__(self, salary, message="Salary is not in (5000, 15000) range"):
        self.salary = salary
        self.message = message
        # Se llama constructor de Exception para mostrar el mensaje de error.
        super().__init__(self.message)


# Se crea una instancia de código que llama error.
salary = int(input("Enter salary amount: "))
if not 5000 < salary < 15000:
    raise SalaryNotInRangeError(salary)
