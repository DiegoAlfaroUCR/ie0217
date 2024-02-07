# Se identifica el directorio según el sistema operativo.
ifeq ($(OS), Windows_NT)
	empty = 
	SRCDIR = src\$(empty)
	command = python
else
	SRCDIR = src/
	command = python3
endif

# Se encuentra el main.
PARTE1 = $(SRCDIR)main.py

PARTE2 = $(SRCDIR)notasEstudiantes.py

# Se ejecuta el script.
default:
	$(command) $(PARTE1)
	$(command) $(PARTE2)
