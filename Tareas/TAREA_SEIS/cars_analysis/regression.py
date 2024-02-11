from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline
import matplotlib.pyplot as plt


def precioXaño(datos):
    # Se extraen los datos del DataFrame.
    datos = datos.sort_values(by=["year"])
    xRaw = datos["year"].values.reshape(-1, 1)
    print(xRaw)
    yRaw = datos["selling_price"].values

    # Se crean los datos train y test.
    X_train, X_test, y_train, y_test = train_test_split(
        xRaw, yRaw, test_size=0.2, random_state=42)

    # Se hace la regresión lineal
    lineal = LinearRegression()
    lineal.fit(X_train, y_train)
    yLineal = lineal.predict(X_test)

    # Se hace la regresión no lineal
    degree = 2
    noLineal = make_pipeline(PolynomialFeatures(degree), LinearRegression())
    noLineal.fit(X_train, y_train)
    yNoLineal = noLineal.predict(X_test)

    plt.scatter(xRaw, yRaw)
    plt.plot(X_test, yLineal, c="Red", label="Regresión lineal.")
    plt.plot(X_test, yNoLineal, c="Green", label="Regresión no lineal.")
    plt.title("Precio en función del año.")
    plt.xlabel("Año.")
    plt.ylabel("Precio.")
    plt.legend()
    plt.tight_layout()
    plt.show()
