import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Generar datos de ejemplo (luna creciente)
# Esta funcion crea do semicirculos "entrelazados" como lunas
# https://scikit-learn.org/stable/modules/generated/sklearn.datasets.make_moons.html
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Configurar y ajustar el modelo DBSCAN
# La clase DBSCAN se puede hacer sobre arrays
# eps = distancia máxima entre dos puntos para ser
#       considerados del mismo cluster.
# min_samples = minimo de puntos cercanos para que un
#               punto se considere un punto core.
dbscan = DBSCAN(eps=0.3, min_samples=5)

# Se entrena el modelo del DBSCAN con los datos.
dbscan_labels = dbscan.fit_predict(X)

# Visualizar resultados
# Se muestran los puntos reales con el color
# dependiendo del label dado por DBSCANS.
plt.scatter(
    X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolor='k', s=50)
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.show()
