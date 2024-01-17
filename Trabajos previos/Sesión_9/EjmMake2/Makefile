# Nombre del programa de salida
TARGET = gestion_biblioteca.exe

# Objetivo predeterminado.
all: $(TARGET) # Se llama make all para correr todo.

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11 #Wall enseña todas las warnings de compilación.

# Lista de archivos fuente
SOURCES = libro.cpp biblioteca.cpp main.cpp

# Lista  de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente en archivos objeto.
%.exe: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

# El @ es en referencia al target (%.exe) y $< es la dependencia

# Regla para compilar el programa a partir de los archivos objeto.
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados.
.PHONY: clean # Esto es para aclarale al makefile que no es un target de archivo y siempre correrlo aun si se encuentra actualizado.
clean:
	del $(TARGET) $(OBJECTS)