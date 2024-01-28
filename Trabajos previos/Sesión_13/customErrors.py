# Programa donde se define una excepcion propia.

# Se crea una clase pero hereda de Exception.
# No posee métodos
class InvalidAgeException(Exception):
    "Raised when the input value is less than 18"
    pass


# Edad minima de votación.
number = 18

try:
    # Se convierte a int, y se compara con number.
    input_num = int(input("Enter a number: "))
    if input_num < number:
        # Se levanta excepcion propia.
        raise InvalidAgeException
    else:
        print("Eligible to Vote")

# Se captura la excepción creada.
except InvalidAgeException:
    print("Exception occurred: Invalid Age")
