from sklearn.cluster import KMeans
import matplotlib.pyplot as plt


def kOptimo(datos):
    X_cluster = datos[["km_driven", "selling_price"]]
    inertias = []
    for k in range(1, 11):
        kmeans = KMeans(n_clusters=k, random_state=42)
        kmeans.fit(X_cluster)
        inertias.append(kmeans.inertia_)

    plt.plot(range(1, 11), inertias, marker='o')
    plt.title('Método del Codo para determinar K.')
    plt.xlabel('Número de Clusters (k)')
    plt.ylabel('Inercia de procesos.')
    plt.show()

    for numk in range(0, 10):
        if inertias[numk] < 0.2e15:
            return (X_cluster, numk + 1)


def generarClusters(datos):
    X_cluster, k = kOptimo(datos)
    kmeans = KMeans(n_clusters=k, random_state=42)
    datos['cluster'] = kmeans.fit_predict(X_cluster)

    plt.scatter(datos["km_driven"], datos["selling_price"],
                c=datos['cluster'], marker='.')

    plt.title('Clusters usando K-means')
    plt.xlabel("Kilometraje del carro.")
    plt.ylabel("Precio de venta del carro.")
    plt.show()
