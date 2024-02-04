from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generar datos aleatorios
np.random.seed(42)
# 100 puntos bidimensionales en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# Configurar subgráficos, se crea una figura para ambos gráficos.
plt.figure(figsize=(12, 5))


# Subgráfico 1: Visualización de puntos de datos aleatorios
plt.subplot(1, 2, 1)

# Se agregan los puntos del conjunto random al grafico normal.
# Se usa de eje x la primera entrada de cada par X
# De eje y se usa la segunda entrada de cada par X
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
plt.title('Puntos de Datos Aleatorios')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')

# Configuración de K-Means con un número de clusters (k) específico
# El numero de clusters es el número de agrupaciones diferentes.
kmeans = KMeans(n_clusters=3)

# Ajuste del modelo
# Esto le dice al modelo que incluya los pares random de X
kmeans.fit(X)

# Etiquetas de los clusters y coordenadas de los centroides
# Los labels indican el indice de cada cluster
labels = kmeans.labels_
# Las posiciones en el plano de los centros
centroids = kmeans.cluster_centers_

# Subgráfico 2: Resultado del Clustering con K-Means
plt.subplot(1, 2, 2)

# Por la cantidad de puntos:
for i in range(len(X)):
    # Se imprime el punto, con el color dependiendo
    # del centroide al que pertenece.
    plt.scatter(X[i][0], X[i][1],
                c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'),
                marker='o')

# Se agregan los centroides como equis negras.
plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200,
            label='Centroids')

# Personalización
plt.title('Resultado del Clustering con K-Means')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.legend()

# Ajustar el diseño para evitar solapamientos
plt.tight_layout()
# Mostrar los subgráficos
plt.show()
