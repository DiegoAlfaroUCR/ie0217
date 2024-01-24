### Dos variaciones, una lo termina otro lo continua.

for i in range(5):
    if i == 3:
        break
    print(i)

for i in range(5):
    if i == 3:
        continue
    print(i)


### Programa para encontrar 5 multiplos de 6
i = 1

while i <= 10:
    print("6 * ", i, '=', 6 * i)

    if i >= 5:
        break

    i = i + 1


### Programa para imprimir numeros impares de 1 a 10

num = 0

while num < 10:
    num += 1

    # % para residuo de división entre 2.
    if (num % 2) == 0:
        continue
    
    print(num)