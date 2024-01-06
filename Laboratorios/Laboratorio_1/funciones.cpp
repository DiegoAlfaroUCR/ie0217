#include "funciones.hpp"
using namespace std;

void mostrarMenu(){
    cout << "\n--- Menu ---\n";
    cout << "1. Agregar empleados\n";
    cout << "2. Listar empleados\n";
    cout << "3. Eliminar empleado\n";
    cout << "4. Salir\n";
}

void procesarOpcion(Empleado empleados[], int& numEmpleados){
    int opcion;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1: // Agregar empleado 
        agregarEmpleado(empleados, numEmpleados);
        break;
    case 2: // Listar empleados
        listarEmpleados(empleados, numEmpleados);
        break;
    case 3: // Eliminar empleado
        eliminarEmpleado(empleados, numEmpleados);
        break;
    case 4: // Salir
        cout << "Saliendo del programa...\n";
        exit(0);
        break;
    default:
    cout << "Opcion no valida. Intente de nuevo.";
    }
}

void agregarEmpleado(Empleado empleados[], int& numEmpleados){
    if (numEmpleados < MAX_EMPLEADOS){
        Empleado nuevoEmpleado;
        nuevoEmpleado.id = numEmpleados + 1;

        cout << "Ingrese el nombre del empleado: ";
        cin >> nuevoEmpleado.nombre;

        cout << "Ingrese el salario del empleado: ";
        cin >> nuevoEmpleado.salario;

        empleados[numEmpleados++] = nuevoEmpleado;
        cout << "Empleado agregado con exito.\n";

    } else {
        cout << "No se puede agregar mas, limite alcanzado.\n";
    }
}

void listarEmpleados(const Empleado empleados[], int& numEmpleados){
    cout << "---Lista de empleados --\n ";
    for (int i = 0; i < numEmpleados; i++)
    {
        cout << "ID: " << empleados[i].id << ", Nombre: "<< 
        empleados[i].nombre << " y Salario: "<< empleados[i].salario ;
    }
}

void eliminarEmpleado(Empleado empleados[], int& numEmpleados){
    int idEliminar;
    cout << "Ingrese el ID a eliminar: ";
    cin >> idEliminar;

    for (int i = 0; i < numEmpleados; ++i)
    {
        if (empleados[i].id == idEliminar){
            for (int j = i; j < numEmpleados+1; ++j)
            {
                empleados[j] = empleados[j+1];
            }
            --numEmpleados;
            cout << "Empleado eliminado con exito.\n";
            return;
        };
    }
}