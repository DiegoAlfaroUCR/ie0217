from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

"""
Parte Práctica: Métodos para realizar clustering.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


def kOptimo(datos):
    """Función para emplear método del codo y obtener ccantidad
    de clusters óptima.

    :param datos: Datos de los carros.
    :type datos: DataFrame
    :return: Ejes usados en el cluster y número de clusters.
    :rtype: tuple(DataFrame, int)
    """

    # Se obtienen los ejes a usar.
    X_cluster = datos[["km_driven", "selling_price"]]

    # Se encuentran las inercias de los diferentes procesos de clustering.
    inertias = []
    for k in range(1, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(X_cluster)
        inertias.append(kmeans.inertia_)

    # Se grafican las inercias en función a la cantidad de clusters.
    plt.plot(range(1, 11), inertias, marker='o')
    plt.title('Método del Codo para determinar K.')
    plt.xlabel('Número de Clusters (k)')
    plt.ylabel('Inercia de procesos.')
    plt.show()

    # Se encuentra el número de clusters bajo cierto threshold.
    for numk in range(0, 10):
        if inertias[numk] < 0.2e15:
            return (X_cluster, numk + 1)


def generarClusters(datos):
    """Función para agrupar datos en clusters.

    :param datos: Datos de los carros.
    :type datos: DataFrame
    """

    # Se obtienen ejes y número de clusters.
    X_cluster, k = kOptimo(datos)

    # Se generan los clusters.
    kmeans = KMeans(n_clusters=k, random_state=42)

    # Se asigna cada punto a un cluster, se guarda esta asignación.
    datos['cluster'] = kmeans.fit_predict(X_cluster)

    # Se muestran los puntos con color dependiendo del cluster.
    plt.scatter(datos["km_driven"], datos["selling_price"],
                c=datos['cluster'], marker='.')

    plt.title('Clusters usando K-means')
    plt.xlabel("Kilometraje del carro.")
    plt.ylabel("Precio de venta del carro.")
    plt.show()
