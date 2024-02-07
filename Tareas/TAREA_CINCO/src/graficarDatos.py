import matplotlib.pyplot as plt
import seaborn as sns

"""
Parte 1: Graficar análisis específicos.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


def linea(dicc):
    """Generar un gráfico de línea.

    :param dicc: Diccionario con los datos
    :type dicc: dict
    """
    x = dicc.keys()
    y = dicc.values()

    plt.plot(x, y)
    plt.title("Cantidad de vuelos en función del mes.")
    plt.xlabel("Mes.")
    plt.ylabel("Cantidad de vuelos.")
    plt.tight_layout()
    plt.show()


def barras(dicc):
    """Generar un gráfico de 2 barras por categoría.

    :param dicc: Diccionario con los datos
    :type dicc: dict
    """
    # Se personaliza con seaborn
    f, ax = plt.subplots(figsize=(6, 20))
    sns.set_theme(style="whitegrid")

    # Mismo eje x para ambas series.
    X = dicc.keys()
    y1 = []
    y2 = []

    # Se generan los valores de cada serie.
    for value in dicc.values():
        y1.append(value[0])
        y2.append(value[1])

    # Se genera la barra de los destinos.
    sns.set_color_codes("pastel")
    sns.barplot(x=X, y=y1, label="Destinos.", color="b", width=1)

    # Se genera la barra de las salidas.
    sns.set_color_codes("muted")
    sns.barplot(x=X, y=y2, label="Salidas.", color="b", width=0.5)

    # Se agrega nombre de ciudad arriba de la barra, rotado y disminuido.
    ax.bar_label(ax.containers[0], labels=X, fontsize=8,
                 rotation=90, padding=7)
    # Se quitan los xlabels
    ax.get_xaxis().set_visible(False)

    # Personalización.
    plt.title("Cantidad de vuelos en función de la ciudad.")
    plt.xlabel("Ciudad de destino/salida.")
    plt.ylabel("Cantidad de vuelos.")
    plt.tight_layout()
    plt.show()


def pie(dicc):
    """Generar un pie graph.

    :param dicc: Diccionario con los datos
    :type dicc: dict
    """
    x = dicc.keys()
    y = dicc.values()

    # Se genera el pie según los porcentajes.
    plt.pie(y, labels=x, autopct='%1.1f%%', startangle=140)
    plt.title('Cantidad de pasajeros segun el mes.')
    plt.show()


def histo(dicc):
    """Generar histograma.

    ::param dicc: Diccionario con los datos
    :type dicc: dict
    """
    X = dicc.keys()
    Y = dicc.values()

    # Se personaliza y genera con Seaborn.
    sns.set_style("darkgrid")
    sns.scatterplot(x=X, y=Y)

    plt.title("Cantidad de pasajeros en función de la cantidad de vuelos.")
    plt.xlabel("Cantidad de vuelos.")
    plt.ylabel("Cantidad de pasajeros.")
    plt.tight_layout()
    plt.show()
