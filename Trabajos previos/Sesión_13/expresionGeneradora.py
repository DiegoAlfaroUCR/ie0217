# Se crea un generador con sintaxis similar a list comprehension
squares_generator = (i * i for i in range(5))

# Se itera en los valores del generador.
for i in squares_generator:
    print(i)
