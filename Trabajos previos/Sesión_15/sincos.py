import matplotlib.pyplot as plt
import numpy as np

# Generar datos de ejemplo
# linspace genera un conjunto de datos espaciados igualmente
# los primeros dos argumentos son los limites del conjunto
# y el tercer argumento son la cantidad de números del conjunto.
# En este caso es [0, 2pi] pues son trigonometricas.
x = np.linspace(0, 2*np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

# Crear un gráfico de líneas con dos series de datos
plt.plot(x, y1, label='Seno')
plt.plot(x, y2, label='Coseno')

# Personalización
plt.xlabel('Ángulo (rad)')
plt.ylabel('Valor')
plt.title('Funciones Seno y Coseno')
plt.legend()

# Mostrar el gráfico
plt.show()
