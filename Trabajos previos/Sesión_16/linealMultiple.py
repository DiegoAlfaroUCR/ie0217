import pandas as pd
import matplotlib.pyplot as plt

# Se importa una función train_test_split
# Separa arrays/matrices en subconjuntos para entrenar el modelo
# https://scikit-learn.org/stable/modules/generated/sklearn.model_selection.train_test_split.html
from sklearn.model_selection import train_test_split

# Clase para crear una regression lineal.
from sklearn.linear_model import LinearRegression

# Se importa función make_regression
# Esta genera un "problema" para realizar una regression
# https://scikit-learn.org/stable/modules/generated/sklearn.datasets.make_regression.html
from sklearn.datasets import make_regression

# Generar datos de ejemplo
# n_samples = numero de muestras, es como numero de filas en un array
# n_features = numero "features", es como numero de columnas en una array
# noise = desviación estándar de sonido agregado al array
# random_state = seed de random a usar, con un int se puede repetir el array
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# Crear un DataFrame para mayor claridad
df = pd.DataFrame(X, columns=['Tamaño', 'Habitaciones', 'Distancia_Ciudad'])
df['Precio'] = y

# Dividir los datos en conjunto de entrenamiento y prueba
# Se le pasa el DataFrame como el eje x y el precio como eje y.
# test_size = indica la porcion del conjunto a incluir, si fuera int es dif
# random_state = seed de random a usar, con un int se puede repetir el array
# Se retorna una lista con 2 elementos por array dado, los de train se usan al
# entrenar el modelo y los de test son los que se le da al modelo para predecir
# sus resultados.
X_train, X_test, y_train, y_test = train_test_split(
    df[['Tamaño', 'Habitaciones', 'Distancia_Ciudad']],
    df['Precio'], test_size=0.2, random_state=42)

# Crear y ajustar el modelo de regresión lineal múltiple
modelo = LinearRegression()

# Se entrena modelo con los train
modelo.fit(X_train, y_train)

# Coeficientes e intercepción
print("Coeficientes:", modelo.coef_)
print("Intercepción:", modelo.intercept_)

# Realizar predicciones en el conjunto de prueba
# Se define como y_pred usando predict en el set de prueba de X.
y_pred = modelo.predict(X_test)

# Se crea una figura que contendrá los 3 subplots.
fig = plt.figure(figsize=(12, 6))

# Gráfica 1 - Tamaño vs Precio
# Se crea un subplot 3d en la figura.
ax1 = fig.add_subplot(131, projection='3d')
# Se crean puntos con los test en las categorias del tamaño y habitaciones.
# Los valores y son los de prueba o los 'reales'
ax1.scatter(
    X_test['Tamaño'], X_test['Habitaciones'],
    y_test, c='blue', marker='o', alpha=0.5)
ax1.set_xlabel('Tamaño')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
ax1.set_title('Precio Verdadero vs Tamano y Habitaciones')

# Gráfica 2 - Tamaño vs Precio Predicho
# Se crea otro subplot 3d en la figura.
ax2 = fig.add_subplot(132, projection='3d')
ax2.scatter(
    # Mismos puntos x, con valores y predecidos.
    X_test['Tamaño'], X_test['Habitaciones'],
    y_pred, c='red', marker='o', alpha=0.5)
ax2.set_xlabel('Tamaño')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
ax2.set_title('Precio Predicho vs Tamaño y Habitaciones')

# Gráfica 3 - Comparacion de Precio Verdadero y Precio Predicho
# Se crea otro subplot 3d en la figura.
ax3 = fig.add_subplot(133)
# Se agregan los puntos predecidos en función de los reales.
ax3.scatter(y_test, y_pred, c='green', alpha=0.5)
ax3.plot(
    # Se muestra una recta con puntos dominio x de los reales
    # y dominio de eje y de los predecidos.
    [min(y_test), max(y_test)], [min(y_test), max(y_test)],
    linestyle='--', color='red', linewidth=2)
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
ax3.set_title('Comparacion de Precio Verdadero y Precio Predicho')

# Se muestra
plt.tight_layout()
plt.show()
