import matplotlib.pyplot as plt
from scipy.cluster.hierarchy import dendrogram, linkage
from sklearn.datasets import make_blobs
from sklearn.cluster import AgglomerativeClustering

# Se usa el método make_blobs para crear clusters de puntos
# n_samples = cantidad de puntos
# centers = cantidad de centroides
# random_state = seed de random a usar
# cluster_std = desviación estándar
# https://scikit-learn.org/stable/modules/generated/sklearn.datasets.make_blobs.html
X, y = make_blobs(n_samples=50, centers=3, random_state=42, cluster_std=1.0)

# Configuración de Hierarchical Clustering con enlace completo
# Método completo se usa para calcular distancia entre los conjuntos.
# Usa el algoritmo de Punto más lejano. Se pueden usar otras opciones.
# https://docs.scipy.org/doc/scipy/reference/generated/scipy.cluster.hierarchy.linkage.html
Z = linkage(X, method='complete')

# Se crea una figura.
plt.figure(figsize=(10, 5))

# Se muestra el gráfico del dendograma.
dendrogram(Z)

# Personalizacion
plt.title('Dendrograma Hierarchical Clustering')
plt.xlabel('Índice del Punto de Datos')
plt.ylabel('Distancia')
plt. show()

# Configuración de Hierarchical Clustering con scikit-learn
# Se usa AgglomerativeClustering clase que permite unir clusters de datos
# Se le pasa la cantidad de clusters de datos.
# https://scikit-learn.org/stable/modules/generated/sklearn.cluster.AgglomerativeClustering.html
agg_clustering = AgglomerativeClustering(n_clusters=3)

# Se hace la prediccion por medio del modelo entrenado.
agg_labels = agg_clustering.fit_predict(X)

# Visualizar resultados
# Se grafican los puntos originarles con el color dependiendo
# del cluster al que pertenece.
plt.scatter(
    X[:, 0], X[:, 1], c=agg_labels, cmap='viridis', edgecolor='k', s=50)
plt.title('Resultado del Clustering Jerárquico')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.show()
