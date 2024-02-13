# Se identifica el directorio según el sistema operativo.
ifeq ($(OS), Windows_NT)
	empty = 
	SRCDIR = src\cars_analysis\$(empty)
	command = python
else
	SRCDIR = src/cars_analysis/
	command = python3
endif

# Se encuentra el main.
MAIN = $(SRCDIR)main.py

# Se ejecuta el script.
default:
	$(command) $(MAIN)
