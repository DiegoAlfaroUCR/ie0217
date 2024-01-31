import matplotlib.pyplot as plt

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Gráfico de barras verticales
# Se dan las categorias primero, luego los valores.
# Se define el color de las barras con color.
plt.bar(categorias, valores, color='royalblue')

# Personalización se hace igual que con otros plots.
plt.xlabel('Categorías')
plt.ylabel('Valores')
plt.title('Gráfico de Barras Verticales')

# Mostrar el gráfico
plt.show()
