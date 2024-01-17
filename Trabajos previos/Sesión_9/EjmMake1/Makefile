# Nombre del programa de salida
TARGET = gestion_estudiantes.exe

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11 #Wall enseña todas las warnings de compilación.

# Lista de archivos fuente
SOURCES = main.cpp estudiante.cpp

# Lista  de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe) # Es lo mismo que main.exe y estudiante.exe

# Regla para compilar los archivos fuente en archivos objeto.
%.exe: %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

# El @ es en referencia al target (%.exe) y $< es la dependencia

# Regla para compilar el programa a partir de los archivos objeto.
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados.
clean:
	del $(TARGET) $(OBJECTS)