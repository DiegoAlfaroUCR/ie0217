import matplotlib.pyplot as plt

# Se definen datos de la linea
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se grafica la linea con los puntos
plt.plot(x, y)

# Se cambian titulos y se hace cuadriculado
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Línea Simple')
plt.grid(True)

# Mostrar el gráfico
plt.show()
