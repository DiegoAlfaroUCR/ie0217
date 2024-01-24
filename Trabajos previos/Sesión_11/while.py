### Programa para mostrar de 1 a 5.
# Se crean dos variables.
i = 1
n = 5

while i <= n:
    print(i)
    i = i + 1

### Programa para calcular suma de numeros hasta que se de 0.
total = 0

number = int(input('Enter a number: '))

# Se suman los números mientras no sea 0.
while number != 0:
    total += number     # total = total + number

    # Se vuelve a pedir el número.
    number = int(input('Enter a number: '))

print("total =", total)


### Se haría un while infinito:
"""
age = 32

while age > 18:
    print('You can vote')
"""

counter = 0
while counter < 3:
    print('Inside loop')
    counter = counter + 1
else:
    print('Inside else')