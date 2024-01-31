# Se pueden crear dos gráficos juntos.

import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

# Crear subtramas con subplots
fig, axs = plt.subplots(1, 2)  # 1 fila, 2 columnas

# Gráfico en la primera subtrama
# Se usa el índice 0
axs[0].plot(x, y1, label='Serie A')
axs[0].set_title('Subtrama 1')

# Gráfico en la segunda subtrama
# Se usa el índice 1
axs[1].plot(x, y2, label='Serie B', color='red')
axs[1].set_title('Subtrama 2')

# Personalización adicional, como etiquetas de ejes y títulos
# Se itera en ambos indices con un for loop
for ax in axs:
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje Y')
    ax.legend()

# Ajustar la disposición, esto hace que esten juntos sin que se mezclen.
plt.tight_layout()

# Mostrar la figura con las subtramas
plt.show()
