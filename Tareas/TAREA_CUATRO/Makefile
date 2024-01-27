# Se identifica el directorio según el sistema operativo.
ifeq ($(OS), Windows_NT)
	empty = 
	SRCDIR = src\$(empty)
else
	SRCDIR = src/
endif

# Se encuentra el main.
MAIN = $(SRCDIR)main.py

# Se ejecuta el script.
default:
	python3 $(MAIN)

performance:
	python3 -m cProfile -s time $(MAIN)