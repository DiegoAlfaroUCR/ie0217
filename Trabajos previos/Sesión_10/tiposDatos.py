### Enteros ###
num1 = 5
print(num1, 'is of type ', type(num1))

num2 = 2.0
print(num2, 'is of type ', type(num2))

num3 = 1+2j
print(num3, 'is of type ', type(num3))


### strings ###
name = 'Python'
print(name)

message = 'Python for begginers'
print(message)


### Arrays/Lists ###
languages = ["Swift", "Java", "Python"]

# Se accede al elemento con indice 0
print(languages[0])

# Ahora con indice 2
print(languages[2])


### Sets ###
student_id = {112, 114, 116, 118, 115}  # Se definen con {}
print(student_id)       # Se imprimen todos los elementos
print(type(student_id)) # Se imprime el tipo de student_id


### Tuple ###
product = ('Microsoft', 'Xbox', 499.99) # Se define con ().
print(product[0])   # Se muestra elemento en indice 0
print(product[1])   # Se muestra elemento en indice 1


### Diccionarios ###

# Se crea un diccionario 'capital_city'
# Se da primero el país y luego la capital, el país es la llave la capital es el valor
capital_city = {'Nepal': 'Kathmandu', 'Italy': 'Rome', 'England': 'London'}

print(capital_city) # Se muestran todos los contenidos

print(capital_city['Nepal']) # Se imprime capital de llave Nepal

print(capital_city['Kathmandu']) # ESTE DA ERROR PUES NO ES UNA LLAVE
