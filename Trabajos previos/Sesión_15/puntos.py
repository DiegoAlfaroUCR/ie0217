# Graficar puntos
import matplotlib.pyplot as plt

# Se crean objetos figura y ejes
fig, ax = plt.subplots()
# Se agregan puntos con las coordenadas [x], [y]
ax.plot([1, 2, 3, 4], [1, 4, 2, 3])

# Se muestra el gráfico
plt.show()
