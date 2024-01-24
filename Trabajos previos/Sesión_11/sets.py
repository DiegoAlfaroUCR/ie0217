# Se crea un set de números.
numbers = {2, 4, 6, 6, 2, 8}
print(numbers) # Se puede imprimir completo, no salen repetidos y salen en desorden.



numbers = {21, 34, 54, 12}
print('Initial Set:',numbers)

# Se agrega un elemento al set.
numbers.add(32)

print('Updated Set:', numbers)



# Se crea un set y luego una lista de strings. 
companies = {'Lacoste', 'Ralph Lauren'}
tech_companies = ['apple', 'google', 'apple']

# Se agregan los elementos de la lista al set sin repetir elementos.
companies.update(tech_companies)

print(companies)



# Se crea un set de strings
languages = {'Swift', 'Java', 'Python'}
print('Initial Set:',languages)

# Se elimina un elemento 'Java' del set.
removedValue = languages.discard('Java')

print('Set after remove():', languages)



# Se crea un set de enteros.
student_id = {112, 114, 116, 118, 115}
print('Student ID:', student_id)

# Se crea un set de strings.
vowel_letters ={'a', 'e', 'i', 'o', 'u'}
print('Vowel Letters:', vowel_letters)

# Se crea un set de varios tipos juntos.
mixed_set = {'Hello', 101, -2, 'Bye'}
print('Set of mixed data types:', mixed_set)



### Note que crear un elemento vacío con {} crea un diccionario no un set.

# Se crea un set vacío
empty_set = set()

# Este crea un diccionario vacío
empty_dictionary = { }

# Verificar tipos
print('Data type of empty_set:', type(empty_set))
print('Data type of empty_dictionary', type(empty_dictionary))



### Imprimir sets
fruits = {"Apple", "Peach", "Mango"}
for fruit in fruits:
    print(fruit)



# Encontrar tamaño de set.
even_numbers = {2,4,6,8}
print('Total Elements:', len(even_numbers))