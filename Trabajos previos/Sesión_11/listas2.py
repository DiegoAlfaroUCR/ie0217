numbers = [21, 34, 54, 12]
print("Before Append:", numbers)

# Se usa append para agregar número a la lista.
numbers.append(32)
print("After Append:", numbers)



languages = ['Python', 'Swift', 'C++']

# Se cambia el tercer elemento.
languages [2] = 'C'
print(languages)



prime_numbers = [2, 3, 5]
print("List1:", prime_numbers)

even_numbers = [4, 6, 8]
print("List2:", even_numbers)

# Se unen ambas listas con extend.
prime_numbers.extend(even_numbers)
print("List after append:", prime_numbers)



languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']

# Se borra el segundo elemento con del.
del languages[1]
print(languages)

# Se borra el último elemento con del.
del languages[-1]
print(languages)

# Se borran los primeros dos elementos
del languages[0 : 2]
print(languages)



languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']

# Se elimina elemento igual al dado en remove
languages.remove('Python')

print(languages)