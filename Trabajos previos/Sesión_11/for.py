# Se imprime cada caracter del string dado.
for x in 'Python':
    print(x)

# Se usa range() para dar un rango de valores.
values = range(4)
print("Tipo de dato de rango:", type(values))

# Se itera desde i = 0 a i = 3 y se imprime el índice.
for i in values:
    print(i)

# Se crear una lista de strings.
languages = ['Swift', 'Python', 'Go']

for _ in languages:
    print("Hello")
    print("Hi")
else:
    print("Se acabaron los strings de la lista.")


for i in digits:
    print(i)
else:   # Este else no se llama pues el for genera un error.
    print("No items left.")