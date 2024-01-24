languages = ['Python', 'Swift', 'C++']

# Se itera a través de la lista con in.
for language in languages:
    print(language)

languages = ['Python', 'Swift', 'C++']

# Se puede usar fuera de un for, pero retorna bool.
print('C' in languages)         # False
print('Python' in languages)    # True

print("List: ", languages)
print("Total Elements: ", len(languages))


# Se crea una lista con un for dentro de los []
numbers = [number*number for number in range(1, 6)]
print(numbers)

# Se vuelve a hacer con otro formato.
numbers = [x*x for x in range(1, 6)]

# Forma equivalente con un for.
numbers = []
for x in range(1, 6):
    numbers.append(x *x)