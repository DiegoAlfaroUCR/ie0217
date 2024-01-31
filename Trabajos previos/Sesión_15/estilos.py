import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear.un gráfico de línea personalizado .con colores, estilos y marcadores
# Linestyle afecta como se dibuja la linea, marker como se muestran los puntos.
# Label cambia el nombre de la linea en la leyenda.
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

# Personalización adicional, como etiquetas de ejes y títulos
plt.xlabel('Eje X')
plt.ylabel('Eje Y')
plt.title('Gráfico Personalizado')
plt.legend()

# Mostrar el gráfico
plt.show()
