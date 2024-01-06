#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>
const int MAX_EMPLEADOS = 100;

struct Empleado
{
    int id;
    std::string nombre;
    double salario;
};

// Funciones
void mostrarMenu();
void procesarOpcion(Empleado empleados[], int& numEmpleados);
void agregarEmpleado(Empleado empleados[], int& numEmpleados);
void listarEmpleados(const Empleado empleados[], int& numEmpleados);
void eliminarEmpleado(Empleado empleados[], int& numEmpleados);


#endif