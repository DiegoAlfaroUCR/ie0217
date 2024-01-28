# Uso de módulo OS para manejo de directorios.
import os

# os.getcwd obtiene el directorio completo, no el relativo.
print(os.getcwd())
original = os.getcwd()

# Método para cambiar el directorio
# El directorio vuelve a ser el original al finalizar el script.
# Comprobado en vscode y en terminal.
os.chdir('C:\\Users\\daas0\\OneDrive\\Escritorio')
print(os.getcwd())
os.chdir(original)

# Método que elimina un archivo.
# Se creó uno antes de borrar para no generar error.
file = open('borrar.txt', 'w')
file.write('Este archivo se va a borrar')
file.close()  # Se debe cerrar para poder borrar.

# Se elimina el archivo.
os.remove('borrar.txt')


# Método para borrar un directorio
# Primero se crea un directorio con mkdir
os.mkdir('FolderPrueba')

# Método para borrar el directorio
os.rmdir('FolderPrueba')

# Método listdir retorna una lista de directorios
# encontrados en el directorio actual.
print(os.listdir())

# Se le puede dar un directorio para imprimir el de ese directorio.
personal = 'C:\\Users\\daas0\\OneDrive\\Escritorio\\Universidad\\'
directorioIe = 'Semestre 4\\Estructuras\\Github\\ie0217'
print(os.listdir(personal + directorioIe))


# Método para renombrar un directorio.
# Tira un error si el nombre final ya existe como directorio.
os.mkdir('test')
os.rename('test', 'renombrado')
