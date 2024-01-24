## Se crea un diccionario con llaves (Nepal) y valores (Kathmandu) tipo strings.
capital_city = {"Nepal": "Kathmandu", "Italy": "Rome", "England": "London"}
print(capital_city)     # Se imprimen ambas.



# Diccionario con valores y llaves de distinto tipo.
numbers = {1: "One", 2: "Two", 3: "Three"}
print(numbers)



## Agregar elementos al diccionario.
capital_city = {"Nepal": "Kathmandu", "England": "London"}
print("Initial Dictionary: ",capital_city)

# Se agrega con la llave en [] y valor igualado.
capital_city["Japan"] = "Tokyo"
print("Updated Dictionary: ",capital_city)



# Se reasigna un valor con su llave.
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Initial Dictionary: ", student_id)

student_id[112] ="Stan"

print("Updated Dictionary: ", student_id)

# Se accede a un valor con su llave.
print(student_id[111])
print(student_id[113])

# Se elimina el diccionario.
del student_id



# Se prueba la membresía de las llaves del diccionario.
squares = {1: 1, 3: 9, 5: 25, 7: 49, 9: 81}

# Será true pues la llave está adentro.
print(1 in squares)

# Será true pues no hay llave 2
print(2 not in squares)

# El operador in solo revisa la llave, no el valor.
print(49 in squares)



# Accediendo a los valores del diccionario.
squares = {1: 1, 3: 9, 5: 25, 7: 49, 9: 81}
for i in squares:
    # Se usa i como indice, pues cada i es una llave del diccionario.
    print(squares[i])