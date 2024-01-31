# Se importan las librerias necesarias.
import matplotlib.pyplot as plt
import numpy as np

# Datos de ejemplo:
# - 4 categorias para cada serie
# - 2 Series de valores
# - Un conjunto de puntos que relacionan el valor de una categoria
#   tomando en cuenta las tendencias de ambas series.
categorias = ['A', 'B', 'C', 'D']
valores1 = [15, 8, 12, 10]
valores2 = [12, 10, 15, 7]
tendencia = [11, 9, 13, 9]

# Crear una figura con los ejes
fig, ax = plt.subplots()

# Ancho de las barras
ancho_barra = 0.35

# Conjunto de datos entre 0 y 4.
indice = np.arange(len(categorias))

# Gráficos de barras agrupadas

# La primera serie se pone a la izquierda de cada indice
# (posicion x es indice - ancho/2)
# le asignan los valores de la serie 1 y un ancho ancho_barra.
# Se agregan el label y el color.
bar1 = ax.bar(indice - ancho_barra / 2, valores1, ancho_barra, label='Serie 1',
              color='royalblue')

# Se hace lo mismo para la segunda serie pero se pone a la derecha del indice
# (posicion x es indice + ancho/2), note el +
bar2 = ax.bar(indice + ancho_barra / 2, valores2, ancho_barra, label='Serie 2',
              color='lightcoral')

# Línea de tendencia, se usan los puntos de la tendencia.
# Se agrega label, marcador y color.
ax.plot(indice, tendencia, label='Tendencia', marker='o', color='green')

# Personalización, se agregan los titulos.
ax.set_xlabel('Categorías')
ax.set_ylabel('Valores')
ax.set_title('Grafico de Barras Agrupadas con Tendencia')

# Se agregan labels de los indices con el nombre de la categoria.
ax.set_xticks(indice)
ax.set_xticklabels(categorias)

# Se agrega una leyenda.
ax.legend()

# Añadir etiquetas en las barras
# Se itera cada serie
for bar in [bar1, bar2]:
    # Se itera cada barra de la serie
    for rect in bar:
        # Se obtiene la altura
        height = rect.get_height()

        # Se agrega una nota con la altura, en la posicion correcta.
        # Se pone en la parte de arriba y en el medio con xy
        # el texto se mueve ligeramente a la izquierda pues posicion de la
        # anotacion se queda a la derecha del medio.
        # Se centra.
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 3),
                    textcoords="offset points",
                    ha='center', va='bottom')

# Mostrar el gráfico
# Se agregan divisiones en el eje y punteadas y semitransparentes.
plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.tight_layout()
plt.show()
