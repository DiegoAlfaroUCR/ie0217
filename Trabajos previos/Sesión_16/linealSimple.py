import numpy as np
import matplotlib.pyplot as plt

# Se importa solo una clase LinealRegression de la sección
# linear_model de sklearn.
from sklearn.linear_model import LinearRegression

# Generar datos de ejemplo
# Se genera una semilla para el modelo random como en C++
np.random.seed(42)

# Se crea el eje x de los datos, se crea un array con 100 filas y 1 columna.
# Se usa random para crear el array que da puntos random de 0 a 1.
# Se multiplica por 2 entonces son de [0, 2].
X = 2 * np.random.rand(100, 1)

# Se vuelve a crear un eje y de datos random
# Son 4 + (3x) + número random
# Se vuelve a crear el arrray random con dimensiones 100, 1
y = 4 + 3 * X + np.random.randn(100, 1)

# Crear un modelo de regresión lineal
# No se le da nada al constructor
modelo = LinearRegression()

# Ajustar el modelo
# El fit le indica al "estimador" de sklearn que debe tomar los datos
# y "entrenar" un modelo para poder aplicar predict luego.
# https://scikit-learn.org/stable/tutorial/basic/tutorial.html
modelo.fit(X, y)

# Imprimir coeficiente e intercepción
# Coef indica la m y intercepción la b de y = mx + b
# Esto pues el tipo del modelo es linear.
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepción:", modelo.intercept_[0])

# Visualizar la regresión lineal

# Se generan los puntos
plt.scatter(X, y)

# Se genera la recta con el predict entrenado gracias a fit.
plt.plot(X, modelo.predict(X), color='red', linewidth=3)

# Se personaliza el gráfico.
plt.title('Regresión Lineal')
plt.xlabel('X')
plt.ylabel('y')
plt.show()
