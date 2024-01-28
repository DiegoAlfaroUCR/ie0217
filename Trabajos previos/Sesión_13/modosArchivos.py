# Se abre el archivo y se guarda en variable.
# Se debe dar con el path relativo.
file1 = open("test.txt")

# Forms de abrir:

file1 = open("test.txt")        # Igual a open con 'r' o 'rt'
file1 = open("test.txt", 'w')   # Permite escribir en archivo.
file1 = open("img.bmp", 'r+b')  # Leer y escribir en modo binario
# El último es la combinacion de 'r', '+' y 'b'
