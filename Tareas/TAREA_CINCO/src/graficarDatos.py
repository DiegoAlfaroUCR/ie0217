import matplotlib.pyplot as plt
import seaborn as sns


def linea(dicc):
    x = dicc.keys()
    y = dicc.values()

    plt.plot(x, y)
    plt.title("Cantidad de vuelos en función del mes.")
    plt.xlabel("Mes.")
    plt.ylabel("Cantidad de vuelos.")
    plt.tight_layout()
    plt.show()


def barras(dicc):
    f, ax = plt.subplots(figsize=(6, 20))
    sns.set_theme(style="whitegrid")

    X = dicc.keys()
    y1 = []
    y2 = []

    for value in dicc.values():
        y1.append(value[0])
        y2.append(value[1])

    sns.set_color_codes("pastel")
    sns.barplot(x=X, y=y1, label="Destinos.", color="b", width=1)

    sns.set_color_codes("muted")
    sns.barplot(x=X, y=y2, label="Salidas.", color="b", width=0.5)

    ax.bar_label(ax.containers[0], labels=X, fontsize=8,
                 rotation=90, padding=7)
    ax.get_xaxis().set_visible(False)

    plt.title("Cantidad de vuelos en función de la ciudad.")
    plt.xlabel("Ciudad de destino/salida.")
    plt.ylabel("Cantidad de vuelos.")
    plt.tight_layout()
    plt.show()
    # https://stackoverflow.com/questions/12998430/how-to-remove-xticks-from-a-plot


def pie(dicc):
    x = dicc.keys()
    y = dicc.values()

    plt.pie(y, labels=x, autopct='%1.1f%%', startangle=140)
    plt.title('Cantidad de pasajeros segun el mes.')
    plt.show()


def histo(dicc):
    X = dicc.keys()
    Y = dicc.values()

    sns.set_style("darkgrid")
    sns.scatterplot(x=X, y=Y)

    plt.title("Cantidad de pasajeros en función de la cantidad de vuelos.")
    plt.xlabel("Cantidad de vuelos.")
    plt.ylabel("Cantidad de pasajeros.")
    plt.tight_layout()
    plt.show()
