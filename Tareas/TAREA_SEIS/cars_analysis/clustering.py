from sklearn.cluster import KMeans
import matplotlib.pyplot as plt

"""
Parte Práctica: Métodos para realizar clustering.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


def kOptimo(ejes):
    """Función para emplear método del codo y obtener cantidad
    de clusters óptima.

    :param ejes: Datos a usar de los carros.
    :type ejes: DataFrame
    :return: Número de clusters.
    :rtype: int
    """

    # Se encuentran las inercias de los diferentes procesos de clustering.
    inertias = []
    for k in range(1, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(ejes)
        inertias.append(kmeans.inertia_)

    # Se grafican las inercias en función a la cantidad de clusters.
    plt.plot(range(1, 11), inertias, marker='o')
    plt.title(f"Método del Codo para {ejes.columns[0]}/{ejes.columns[1]}.")
    plt.xlabel('Número de Clusters (k)')
    plt.ylabel('Inercia de procesos.')
    plt.show()

    # Se encuentra el número de clusters bajo cierto threshold.
    for numk in range(0, 10):
        if inertias[numk] < 0.2e15:
            return numk + 1


def generarClusters(ejes, k):
    """Función para agrupar datos en clusters.

    :param ejes: Datos a tomar en cuenta de los carros.
    :type ejes: DataFrame
    :param k: Número de clusters a usar.
    :type k: int
    """

    # Se entrenan los clusters.
    kmeans = KMeans(n_clusters=k, random_state=42)

    # Se asigna cada punto a un cluster, se guarda esta asignación.
    ejes['cluster'] = kmeans.fit_predict(ejes)

    # Se muestran los puntos con color dependiendo del cluster.
    # La primera columna de ejes tiene el eje x, la segunda el eje y.
    plt.scatter(ejes.iloc[:, 0], ejes.iloc[:, 1],
                c=ejes['cluster'], marker='.')

    # Personalización
    plt.title('Clusters usando K-means')
    plt.xlabel(ejes.columns[0])
    plt.ylabel(ejes.columns[1])
    plt.show()


def mostrarClusters(datos):
    """Función para agrupar carros en clusters según
    diferentes características.

    :param datos: Datos de los carros.
    :type datos: DataFrame
    """

    # Clusters con el precio en función al kilometraje.
    ejes1 = datos[["km_driven", "selling_price"]]
    generarClusters(ejes1, kOptimo(ejes1))

    # Clusters con el precio en función del año.
    ejes2 = datos[["year", "selling_price"]]
    generarClusters(ejes2, kOptimo(ejes2))
