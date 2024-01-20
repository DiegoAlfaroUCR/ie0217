### Comcatenacion y print normal ###

number = -10.6

name = "IE0217"

# Se imprimen literales
print(5)

# Se imprimen variables
print(number)
print(name)

# Se unen los strings
print('Este curso es ' + name)


### Banderas opcionales ###
# print(object= sep= end= file= flush=)

print('New Year', 2023, 'See you soon!', sep= '. ') # Se cambia la separacion entre strings.

print('Good Morning!', end= ' ') # Se cambia el final del string, ahora no es endl
print('It is rainy today')


### Print con format ###
x = 5
y = 10

print('The value of x is {} and y is {}'.format(x, y)) # Se introducen al string dado, no hay que dividirlo.