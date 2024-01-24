import random

# Se imprime número aleatorio en rango de 10 a 20
print(random.randrange(10,20))


list1= ['a', 'b', 'c', 'd', 'e']
# Se obtiene un item aleatorio de la lista.
print(random.choice(list1))

# Se desordena la lista.
random.shuffle(list1)

# Se muestra la lista
print(list1)

# Se muestra un elemento aleatorio.
print(random.random())