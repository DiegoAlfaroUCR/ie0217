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

all: parte1 parte2

parte1: build1 run1
parte2: build2 run2

# Nombre del programa de salida
TARGET1 = parte1.$(terminacion)
TARGET2 = parte2.$(terminacion)

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Archivos fuente.
SOURCES1 = $(SRCDIR)main.cpp
SOURCES2 = $(SRCDIR)mainCorreo.cpp $(SRCDIR)Correo.cpp

# Regla para compilar parte 1.
$(TARGET1): $(SOURCES1)
	$(CXX) $(CXXFLAGS) -o $(TARGET1) $(SOURCES1)

# Regla para compilar parte 2.
$(TARGET2): $(SOURCES2)
	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(SOURCES2)

# Compila el ejecutable.
build1: $(TARGET1)
build2: $(TARGET2)

# Regla para iniciar el programa
run1:
	./$(TARGET1)
run2:
	./$(TARGET2)

# Regla para limpiar los archivos generados.
.PHONY: clean
clean:
	$(cleanCommand) $(TARGET1) $(TARGET2)