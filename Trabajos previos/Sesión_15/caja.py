import matplotlib.pyplot as plt

# Datos de ejemplo
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# Se crea un gráfico de caja, solo ocupa el conjunto de datos.
# Este muestra diferencias entre tercer cuartil y primer cuartil
# Además las lineas indican la mediana y el rango de datos hasta el
# mínimo y máximo, excluyendo puntos atípicos.
# Si hay puntos atípicos son puntos.
plt.boxplot(datos)

# Personalización
plt.ylabel('Valores')
plt.title('Gráfico de Caja')

# Mostrar el gráfico
plt.show()
