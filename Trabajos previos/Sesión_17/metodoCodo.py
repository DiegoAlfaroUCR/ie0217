from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generar datos aleatorios
# Para reproducibilidad se usa una seed random establecida.
np.random.seed(42)
# 100 puntos bidimensionales en un rango de 0 a 10
X = np.random.rand(100, 2) * 10

# Calcular la inercia para diferentes valores de k
# Se guardan en lista inercia
inertias = []
for k in range(1, 11):
    # Se genera con una misma seed random los diferentes kmeans.
    # Se hacen de 0 a 10 clusters.
    kmeans = KMeans(n_clusters=k, random_state=42)

    # Siempre se hace el modelo con el mismo array.
    kmeans.fit(X)

    # Se agrega la "inercia" del kmean.
    # La inercia indica que tan bien se agrupó el conjunto con los clusters.
    # Entre menor sea la inercia, mejor es la agrupación.
    inertias.append(kmeans.inertia_)

# Graficar el método del codo
# Se grafican los puntos de las inercias en funcion de cantidad de clusters.
plt.plot(range(1, 11), inertias, marker='o')
plt.title('Método del Codo')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Inercia')
plt.show()
