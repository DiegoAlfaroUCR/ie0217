# Es importante cerrar el archivo
# Hay 3 formas:

# Forma normal
# Se abre el archivo
file1 = open("test.txt", "r")

# Se lee el archivo
read_content = file1.read()
print(read_content)

# Se cierra el archivo
file1.close()


# Usando with, cierra automaticamente.
with open("test.txt", "r") as file1:
    read_content = file1.read()
    print(read_content)


# Usando try-finally
# Permite manejo de errores
try:
    file1 = open("test.txt", "r")
    read_content = file1.read()
    print(read_content)

finally:
    # Siempre se cierra
    file1.close()


""" Usando with open para escribir """
with open('test2.txt', 'w') as file2:
    # Se escribe el contenido a text2.txt
    file2.write('Programming is Fun.')
