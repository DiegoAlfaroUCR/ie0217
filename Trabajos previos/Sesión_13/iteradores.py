# Se define una lista
my_list = [4, 7, 0]

# Se crea un iterador de la lista con funcion iter
iterator = iter(my_list)

# Se obtiene el primer elemento. Se usa operador next.
print(next(iterator))  # Muestra 4

# Se accede al siguiente elemento con next.
print(next(iterator))  # Muestra 7

# Se accede al siguiente elemento con next.
print(next(iterator))  # Muestra 0

# Si se vuelve a llamar next se da un error StopIteration
# print(next(iterator))


# Es lo mismo que hacer:
for element in my_list:
    print(element)

# Esta no genera error por iteración.
