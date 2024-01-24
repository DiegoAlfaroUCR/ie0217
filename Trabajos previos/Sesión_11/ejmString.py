# Se crean variables de tipo String.
name = "Python"
print(name)

message = "I love Python."
print(message)

greet = 'hello'

# Se accede al segundo elemento de string greet
print(greet[1]) # "e"

# Se accede al segundo elemento de string greet
print(greet[-4]) # "e"

# Se accede a elementos del string desde el segundo al cuarto.
print(greet[1:4]) # "ell"


### NOTE QUE NO SE PUEDE REASIGNAR PARTES DE STRING: message[0] = 'H'


message = 'Hola Amigos'

# Se reasigna el string.
message = 'Hello Friends'

print(message)

# String multilínea
message = """
Never gonna give you up
Never gonna let you down
"""


# Se crean strings nuevos
str1 = "Hello, world!"
str2 = "I love Python."
str3 = "Hello, world!"

# Se comparan strings
print(str1 == str2)
print(str1 == str3)



### in y not in en strings
print('a' in 'program') # True
print('at' not in 'battle') # False



## Concatenación
greet = "Hello, "
name = "Jack"

# Se suman los strings
result = greet + name
print(result)

greet = 'Hello'

# Se itera cada letra del string y se imprime.
for letter in greet:
    print(letter)

# Se imprime longitud del string.
print(len(greet))