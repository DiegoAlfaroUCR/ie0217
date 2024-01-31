import matplotlib.pyplot as plt

# Datos de ejemplo
proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# Se crea gráfico de pastel con pie()
# Se le pasan las proporciones y las etiquetas en orden correspondiente.
# Se pasan el ángulo de inicio del primer label
# y el formato de los porcentajes.
# Automaticamente se calculan los porcentajes.
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140,
        colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

# Personalización
plt.title('Grafico de Pastel')

# Mostrar el gráfico
plt.show()
