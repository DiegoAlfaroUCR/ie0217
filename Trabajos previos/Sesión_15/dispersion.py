import matplotlib.pyplot as plt

# Se crean datos de los puntos
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Se crea un grafico tipo scatter con label en la leyenda
# llamado puntos.
plt.scatter(x, y, label='Puntos')

# Se cambian los titulos.
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico de Dispersión')

# Se muestran los labels establecidos como leyenda.
plt.legend()

# Mostrar.el gráfico
plt. show()
