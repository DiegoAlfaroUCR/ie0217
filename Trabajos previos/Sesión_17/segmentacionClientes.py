from sklearn.preprocessing import StandardScaler
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

"""
############################
Proceso para segmentar datos
############################
"""


"""
Paso 1, Preparación de datos.
Se cargan los datos a analizar, en este caso info de clientes.
"""

# Conjunto de datos.
# Se importan de data.csv a un DataFrame.
data = pd.read_csv('data.csv')

"""
Paso 2, Exploración y preprocesamiento.
Se exploran y preprocesan los datos, por ejemplo limpiar valores nulos.
"""

# Exploración de datos, se imprimen los datos del DataFrame.
print(data.head())

# Preprocesamiento (por ejemplo, escalamiento de características)
# Clase StandardScaler normaliza la escala de los datos por medio
# del standard score de estos.
# https://scikit-learn.org/stable/modules/generated/sklearn.preprocessing.StandardScaler.html
#
# Standard score de los datos indica cuanto se desvia por desviaciones estándar
# un set de datos con su promedio.
# https://link.springer.com/referenceworkentry/10.1007/978-94-007-0753-5_2852
scaler = StandardScaler()

# Se entrenan el modelo con los datos.
scaled_data = scaler.fit_transform(data)

"""
Paso 3, Selección del número de clusters (k).
Se obtiene el número óptimo de clusters.
En este caso se grafica la inercia del modelo en funcion a número
de clusters.
"""

# Se usa el método del Codo
inertia = []
for k in range(1, 11):
    kmeans = KMeans(n_clusters=k, random_state=42)
    kmeans.fit(scaled_data)
    inertia.append(kmeans.inertia_)

# Graficar el Método del Codo
plt.plot(range(1, 11), inertia, marker='o')
plt.title('Método del Codo para Selección de k')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Inercia')
plt.show()

"""
Paso 4, Entrenamiento del modelo K-means.
Se entrena el modelo K-Means con el número óptimo según la observación
del paso anterior.

En este caso se determinó que el número óptimo eran 4 clusters.
"""

# Se genera la agrupación, con 4 clusters y se entrena el modelo.
kmeans = KMeans(n_clusters=4, random_state=42)
cluster_labels = kmeans.fit_predict(scaled_data)

# Se crea una nueva categoría al DataFrame con el tipo de cluster
# al que pertenencen los puntos.
data['Cluster'] = cluster_labels

"""
Paso 5, Análisis y descripción de los segmentos de clientes identificados.
Se describen los clientes por los clusters a los que se agrupan.
"""

# Análisis de segmentos
# Se agrupan los datos por cluster al que pertenecen.
# A estos se le toma el promedio.
segment_analysis = data.groupby('Cluster').mean()

# Visualización de segmentos
plt.figure(figsize=(12, 6))
# Se itera cada cluster.
for cluster in range(4):
    # Se muestran los puntos del cluster con un label y color dependiendo
    # del cluster al que corresponden.
    # Primer dato es la frecuenca (eje x)
    # Segundo dato es el gasto promedio (eje y)
    plt.scatter(data[data['Cluster'] == cluster]['Frequency'],
                data[data['Cluster'] == cluster]['Avg_Spend'],
                label=f'Cluster {cluster}')

# Personalizacion
plt.title('Segmentación de Clientes por Frecuencia y Gasto Promedio')
plt.xlabel('Frecuencia de Visita')
plt.ylabel('Gasto Promedio')
plt.legend()
plt.show()
