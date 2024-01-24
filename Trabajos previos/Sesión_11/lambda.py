"""
lambda argument(s) : expresion
Solo aceptan una instrucción.
"""


## Se crea una función lambda.
greet = lambda : print("Hola Mundo")

# Se llama la función lambda.
greet()


## Función lambda que acepta un argumento.
greet_user = lambda name : print('Hey there,',name)

greet_user('Delilah')


## Programa para filtrar los números pares de la lista.
my_list = [1, 5, 4, 6, 8, 11, 3, 12]
# Esta funcion lambda se usa con filter para dar la condición y la lista.
new_list = list(filter(lambda x: (x%2 == 0), my_list))

print(new_list)


## Programa para multiplicar por 2 los números de la lista usando map().
my_list = [1, 5, 4, 6, 8, 11, 3, 12]
# Aquí se usa con map para multiplicar cada elemento y agregarlo.
new_list = list(map(lambda x: x * 2, my_list))

print(new_list)