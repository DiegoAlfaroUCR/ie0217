import numpy as np
import matplotlib.pyplot as plt

# Se importa clase PolynomialFeatures para hacer la regression polinomial.
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression

# Funcion que permite crear un objeto Pipeline con 'estimadores' dados.
# https://scikit-learn.org/stable/modules/generated/sklearn.pipeline.make_pipeline.html
# Un objeto pipeline permite aplicar varais transformaciones a los datos
# durante el procesamiento del modelo. Estos 'estimadores' deben aplicar fit.
# https://scikit-learn.org/stable/modules/generated/sklearn.pipeline.Pipeline.html#sklearn.pipeline.Pipeline
from sklearn.pipeline import make_pipeline

# Generar datos de ejemplo no lineales
np.random.seed(42)  # Semilla para random
X = 2 * np.random.rand(100, 1)  # x = 2 * array de num randoms (100, 1)

# y = (x^2)/2 + x + 2 + array de num randoms (100, 1)
y = 0.5 * X ** 2 + X + 2 + np.random.randn(100, 1)

# Visualizar datos no lineales
plt.scatter(X, y)
plt.title('Datos de Regresión No Lineal')
plt.xlabel('x')
plt.ylabel('y')
plt. show()

# Aplicar regresión polinómica de segundo grado
grado_polinomio = 2

# Se agregan estimadores de linearRegression y un polinomial con grado 2.
modelo_polinomico = make_pipeline(
    PolynomialFeatures(grado_polinomio), LinearRegression())

# Se prepara el modelo con los estimadores.
modelo_polinomico.fit(X, y)

# Visualizar la regresión polinómica
# Se crea un dominio en el eje x de 0 a 2 con 100 elementos
# Con reshape se pasa a un array de 100 filas y una columna con los elementos.
X_test = np.linspace(0, 2, 100).reshape(100, 1)

# Se sacan los y predictos con predict a X_test
y_pred = modelo_polinomico.predict(X_test)

# Se muestran los puntos reales
plt.scatter(X, y)

# Se muestra la linea de regression.
plt.plot(X_test, y_pred, color='red',
         label=f'Regresión Polinómica ({grado_polinomio} grado)')

# Personalización
plt.title('Regresión Polinómica')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()

# Como son dos gráficos que no son subplots, se generan dos diferentes.
plt.show()
