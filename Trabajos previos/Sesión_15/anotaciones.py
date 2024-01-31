import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear un grafico de linea
plt.plot(x, y, label='Datos de ejemplo')

# Añadir una anotación, esta es una flecha
# Se crea con annotate(Texto de la nota, el punto a donde apunta,
# la posicion del texto, arrowprops para hacerlo una flecha.)
# La parte de la flecha es opcional, se le da el color y una escala.
plt.annotate('Valor Maximo', xy=(5, 14), xytext=(3, 13),
             arrowprops=dict(facecolor='black', shrink=0.05),
             )

# Personalización adicional, como etiquetas de ejes y títulos
plt.xlabel('Eje X')
plt.ylabel('Eje.Y')
plt.title('Gráfico con Anotación')
plt.legend()

# Mostrar el gráfico
plt.show()
