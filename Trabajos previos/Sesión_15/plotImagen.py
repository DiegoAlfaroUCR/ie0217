import matplotlib.pyplot as plt

# Se definen datos de la linea
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se grafica la linea con los puntos
plt.plot(x, y)

# Se cambian titulos
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')

# Se guarda el gráfico en un archivo.png
plt.savefig('grafico.png')

# Se muestra el gráfico
plt.show()
