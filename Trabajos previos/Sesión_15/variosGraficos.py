import matplotlib.pyplot as plt

# Se agregan dos gráficos de distinto tipo a la misma figura.

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Crear una figura con dos subtramas
# El figzise permite cambiar el tamaño de los gráficos
fig, axs = plt.subplots(1, 2, figsize=(10, 4))

# Subtrama 1: Gráfico de barras en el primer campo.
axs[0].bar(categorias, valores, color='royalblue')
axs[0].set_title('Grafico de Barras')

# Subtrama 2: Gráfico de línea en el segundo campo.
axs[1].plot(categorias, tendencia, color='green', marker='o')
axs[1].set_title('Grafico de Linea')

# Personalización adicional
for ax in axs:
    ax.set_xlabel('Categorías')
    ax.set_ylabel('Valores')

# Ajustar la disposición
plt.tight_layout()

# Mostrar la figura con ambas subtramas
plt.show()
