from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import matplotlib.pyplot as plt
import numpy as np

# Generar datos aleatorios
np.random.seed(42)

# 100 puntos bidimensionales en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# Calcular el coeficiente de silueta para diferentes valores de k
silhouette_scores = []
for k in range(2, 20):
    # Se genera con una misma seed random los diferentes kmeans.
    # Se hacen de 0 a 10 clusters.
    kmeans = KMeans(n_clusters=k, random_state=42)

    # Se entrena el modelo con los mismos datos.
    kmeans.fit(X)

    # Se obtiene el puntaje de silueta y se agrega a la lista.
    # Este puntaje indica que tan cerca están los puntos de un
    # centroide a estar en otro centroide.
    # Entre más cerca a uno es mejor.
    score = silhouette_score(X, kmeans.labels_)
    silhouette_scores.append(score)

# Graficar el método de la silueta
# Se grafican los puntos de la silueta en función del número de clusters.
plt.plot(range(2, 20), silhouette_scores, marker='o')
plt.title('Metodo de la Silueta')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Coeficiente de Silueta')
plt.show()
