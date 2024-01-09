# Se determina el OS y se asignan las variables acordemente.
ifeq ($(OS), Windows_NT)
	terminacion = exe
	cleanCommand = del
	empty = 
	SRCDIR = src\$(empty)
else
	terminacion = out
	cleanCommand = rm -f
	SRCDIR = src/
endif

# Nombre del programa de salida
TARGET = adivina.$(terminacion)

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = $(SRCDIR)main.cpp $(SRCDIR)funciones.cpp

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.$(terminacion))

# Regla para compilar los archivos fuente en archivos objeto.
%.$(terminacion): %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto.
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Compila el ejecutable.
build: $(TARGET)

# Regla para limpiar los archivos generados.
.PHONY: clean
clean:
	$(cleanCommand) $(TARGET) $(OBJECTS)

# Regla para iniciar el programa
run:
	./$(TARGET)

# Regla para compilar e iniciar el programa.
all: build run