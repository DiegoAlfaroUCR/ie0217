import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split

# Se incluyen clases para las regulaciones Lasso y Ridge
from sklearn.linear_model import LinearRegression, Lasso, Ridge
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline

# Generar datos de ejemplo no lineales
np.random.seed(42)
X = 2 * np.random.rand(100, 1)
# y = (x^2)/2 + x + 2 + random
y = 0.5 * X**2 + X + 2 + np.random.randn(100, 1)

# Dividir los datos en conjunto de entrenamiento y prueba
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# Crear modelo de regresión polinomica de grado 2
# Esta es la regresión normal.
modelo_polinomico = make_pipeline(
    PolynomialFeatures(degree=2), LinearRegression())
# Se entrena con los array train obtenidos de trian_test_split
modelo_polinomico.fit(X_train, y_train)

# Crear modelo Lasso (L1)
# Se usa pipeline para unir Lasso con el modelo de polinomiales de grado 2.
# Se entrena con los array train obtenidos de trian_test_split
modelo_lasso = make_pipeline(PolynomialFeatures(degree=2), Lasso(alpha=0.1))
modelo_lasso.fit(X_train, y_train)

# Crear modelo Ridge (L2)
# Se usa pipeline para unir Ridge con el modelo de polinomiales de grado 2.
# Se entrena con los array train obtenidos de trian_test_split
modelo_ridge = make_pipeline(PolynomialFeatures(degree=2), Ridge(alpha=0.1))
modelo_ridge.fit(X_train, y_train)

# Visualizar los resultados
# Se usa zip para juntar en pares los valores del eje x reales con
# los predecidos por el modelo respectivo, según los índices de estos.
# Estos pares se ordenan y se devuelven a la estructura original
# usando el operador zip(*contenido)
# https://www.geeksforgeeks.org/zip-in-python/
X_test_sorted, y_pred_polinomico_sorted = \
    zip(*sorted(zip(X_test, modelo_polinomico.predict(X_test))))
X_test_sorted, y_pred_lasso_sorted = \
    zip(*sorted(zip(X_test, modelo_lasso.predict(X_test))))
X_test_sorted, y_pred_ridge_sorted = \
    zip(*sorted(zip(X_test, modelo_ridge.predict(X_test))))

# Se muestran los puntos reales.
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')

# Se muestra la regresion normal.
plt.plot(X_test_sorted, y_pred_polinomico_sorted, label='Regresion Polinomica',
         color='green')

# Se muestra la regresion con lasso.
plt.plot(X_test_sorted, y_pred_lasso_sorted, label='Lasso (L1)', color='red')

# Se muestra la regresion con ridge.
plt.plot(X_test_sorted, y_pred_ridge_sorted, label='Ridge (L2)',
         color='orange')

# Personalización
plt.title('Comparación de Modelos con Regularización')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.show()
