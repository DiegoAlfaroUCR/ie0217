"""
Archivo principal para iniciar programa.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


from evaluacionGeneral import evaluacionGeneral
from evaluacionEspecifica import evaluacionEspecifica

" Se crean objetos de las dos clases necesarias. "
general = evaluacionGeneral()
especifica = evaluacionEspecifica()


" Se imprime menú, se dan opciones hasta escoger la salida. "
print("-----Bienvenid@ al sistema de alergias-----")
while True:
    print("\n-----Menu de Opciones-----")
    print("1. Ingresar puntuacion de alergia.")
    print("2. Ingresar alergias que le afectan.")
    print("3. Agregar una alergia a la base de datos.")
    print("4. Mostrar lista de alergias en base de datos.")
    print("5. Salir del programa.")
    opcion = input("Escoja una opción: ")

    match opcion:
        case '1':
            especifica.infoUsuario(general.todasAlergias)
        case '2':
            general.ingresarAlergia()
            general.mostrarGeneral()
        case '3':
            general.crearAlergia()
        case '4':
            general.mostrar_info(general.todasAlergias)
        case '5':
            print("\nSaliendo del programa...")
            exit(0)
        case default:
            print("\nOpción no válida.")
