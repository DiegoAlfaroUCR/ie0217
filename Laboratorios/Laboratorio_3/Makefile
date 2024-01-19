CC = g++
CFLAGS = -std=c++11

all: programa

programa: main.cpp Contacto.hpp Agenda.hpp
	$(CC) $(CFLAGS) main.cpp -o agenda.exe
	agenda.exe

clean:
	del agenda.exe