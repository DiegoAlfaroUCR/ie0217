import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

# Se importan métodos mean_absolute_error y mean_squared_error
# mean_absolute_error obtiene el MAE dado entre dos arrays de datos.
# mean_squared_error obtiene el MSE de dos arrays de datos
from sklearn.metrics import mean_absolute_error, mean_squared_error

# Se importa función para obtener raíz cuadrada.
from math import sqrt

# Generar datos de ejemplo
np.random.seed(42)
X = 2 * np.random.rand(100, 1)

# y = 4 + 3x + random(100, 1)
y = 4 + 3 * X + np.random.randn(100, 1)

# Dividir los datos en conjunto de entrenamiento y prueba
# El operador \ permite continuar la linea debajo.
X_train, X_test, y_train, y_test = \
    train_test_split(X, y, test_size=0.2, random_state=42)

# Crear y ajustar el modelo de regresión lineal
# El modelo se crea como una regresion lineal
modelo = LinearRegression()
# Se entrena con los arrays train sacados con train_test_split
modelo.fit(X_train, y_train)

# Se hacen las predicciones a partir del modelo y array de test para eje x.
y_pred = modelo.predict(X_test)

# Calcular métricas de evaluación
mae = mean_absolute_error(y_test, y_pred)
mse = mean_squared_error(y_test, y_pred)

# El rmse es equivalente a raiz de mse.
rmse = sqrt(mse)

# Se definen en RAE y RSE:

# RAE = sumatoria[yTest - yPred] / sumatoria[yTest - prom(yTest))]
rae = np.sum(np.abs(y_test - y_pred)) /\
    np.sum(np.abs(y_test - np.mean(y_test)))

# RSE = sumatoria[(yTest - yPred)^2] / sumatoria[(yTest - prom(yTest))^2]
rse = np.sum((y_test - y_pred) ** 2) / np.sum((y_test - np.mean(y_test)) ** 2)

# Imprimir resultados
print(f'MAE: {mae:.2f}')
print(f'MSE: {mse:.2f}')
print(f'RMSE: {rmse:.2f}')
print(f'RAE: {rae:.2%}')
print(f'RSE: {rse:.2%}')

# Se muestra la gráfica.

# Puntos reales
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')

# Linea de regresión lineal
plt.plot(X_test, y_pred, label='Predicciones', color='red')

# Personalizacion
plt.title('Regresion Lineal y Errores')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()

# Mostrar errores en la gráfica
# Se hace para cada punto según su eje x.
for i in range(len(X_test)):
    # Se grafica una recta de la altura predecida del punto a la real.
    # Esto en su mismo valor de x.
    plt.plot([X_test[i], X_test[i]],
             [y_test[i], y_pred[i]],
             linestyle='--', color='gray')

plt.show()
