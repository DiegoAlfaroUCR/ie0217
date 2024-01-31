import matplotlib.pyplot as plt

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Crear un gráfico de barras con los datos, el color y el borde.
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Personalización
# Títulos
plt.xlabel('Categorías', fontsize=12)
plt.ylabel('Valores', fontsize=12)
plt.title('Grafico de Barras', fontsize=14)

# Se editan las etiquetas en el eje x con xticks, al pasar rotation
# se puede inclinar las etiquetas.
plt.xticks(rotation=45)

# Se hacen divisiones en el eje y punteadas y semitransparentes.
plt.grid(axis='y', linestyle='--', alpha=0.7)

# Añadir etiquetas en las barras
# Se crea un texto en la parte de arriba de cada barra.
# Se usa i para el índice y los valores con v
# Se agrega texto en text(x, y, string) pero se le agrega un poco de altura
# El string es el valor de la barra, tambien se centra y personaliza tamaño.
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)

# Mostrar el gráfico
plt. show()
