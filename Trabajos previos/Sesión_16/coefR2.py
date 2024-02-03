import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

# Se importa método r2_score que retorna el coeficiente R^2
from sklearn.metrics import r2_score

# Generar datos de ejemplo
np.random.seed(42)
X = 2 * np.random.rand(100, 1)

# y = 4 + 3x + random(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# Dividir los datos en conjunto de entrenamiento y prueba
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# Se hace un modelo lineal
modelo = LinearRegression()

# Se entrena con los arrays train obtenidos con train_test_split
modelo.fit(X_train, y_train)

# Realizar predicciones en el conjunto de prueba
# Se usa predict en el array de puntos de prueba en eje x.
y_pred = modelo.predict(X_test)

# Calcular el coeficiente de determinación R^2
# Se comparan los valores del eje y reales con los predecidos.
r2 = r2_score(y_test, y_pred)

# Visualizar los resultados

# Se muestran los puntos reales
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')

# Se genera una curva de la regresion lineal.
# Se le agrega el coeficiente R^2 en el label de la leyenda.
plt.plot(X_test, y_pred, label=f'Regresion Lineal (R^2={r2:.2f})',
         color='red')

# Personalización
plt.title('Regresión Lineal y Coeficiente de Determinación R^2')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.show()
