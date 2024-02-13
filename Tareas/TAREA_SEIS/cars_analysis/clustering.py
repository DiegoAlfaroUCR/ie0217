from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import matplotlib.pyplot as plt

"""
Parte Práctica: Métodos para realizar clustering.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


def kOptimo(ejes, metodo):
    """Función para emplear métodos de codo o silueta para
    obtener cantidad de clusters óptima.

    :param ejes: Datos a usar de los carros.
    :type ejes: DataFrame
    :return: Número de clusters.
    :rtype: int
    """

    # Se encuentran la inercia/puntaje de silueta de los
    # diferentes procesos de clustering.
    score = []
    for k in range(2, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(ejes)
        if metodo == "Inercias":
            valor = kmeans.inertia_
        else:
            valor = silhouette_score(ejes, kmeans.labels_)
        score.append(valor)

    # Se grafican las métricas en función a la cantidad de clusters.
    plt.plot(range(2, 11), score, marker='o')
    plt.title(f"Método de {metodo} para {ejes.columns[0]}/{ejes.columns[1]}.")
    plt.xlabel('Número de Clusters (k)')
    plt.ylabel(f"{metodo} de procesos.")
    plt.show()

    # Se encuentra el número de clusters bajo cierto threshold.
    # El threshold depende del tipo de método que se usa.
    for numk in range(len(score)):
        if (metodo == "Inercias") and (score[numk] < 2e14):
            print(f"Cantidad optima de clusters determinada: {numk + 2}")
            return numk + 2

        elif (metodo == "Siluetas") and (score[numk] > 0.8):
            print(f"Cantidad optima de clusters determinada: {numk + 2}")
            return numk + 2


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

    # Clusters con el precio en función al kilometraje, con método del codo.
    ejes1 = datos[["km_driven", "selling_price"]]
    generarClusters(ejes1, kOptimo(ejes1, "Inercias"))

    # Clusters con el precio en función del año, con método de siluetas.
    ejes2 = datos[["year", "selling_price"]]
    generarClusters(ejes2, kOptimo(ejes2, "Siluetas"))
