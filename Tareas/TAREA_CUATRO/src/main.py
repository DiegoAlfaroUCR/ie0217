from evaluacionGeneral import evaluacionGeneral
from evaluacionEspecifica import evaluacionEspecifica

# Se crean objetos de las dos clases necesarias
general = evaluacionGeneral()
especifica = evaluacionEspecifica()


print("-----Bienvenid@ al sistema de alergias-----")
while True:
    print("\n-----Menu de Opciones-----")
    print("1. Ingresar puntuacion de alergia.")
    print("2. Ingresar alergias que le afectan.")
    print("3. Agregar una alergia a la base de datos.")
    print("4. Salir del programa.")
    opcion = int(input("Escoja una opción: "))

    match opcion:
        case 1:
            especifica.infoUsuario(general.todasAlergias)
        case 2:
            general.ingresarAlergia()
            general.mostrarGeneral()
        case 3:
            general.crearAlergia()
        case 4:
            print("\nSaliendo del programa...")
            exit(0)
