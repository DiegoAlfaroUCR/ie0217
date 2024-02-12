from sklearn.linear_model import LinearRegression
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error
import matplotlib.pyplot as plt

"""
Parte Práctica: Métodos para realizar regresiones.
Autor: Diego Alfaro Segura
Copyright: Licenciado bajo CC BY-NC-ND 4.0
"""


def precioXaño(datos):
    """Función para analizar el precio de los carros en función
    al año de compra.
    """

    print("### Regresiones del precio en función del año de compra. ###")

    # Se extraen los datos del DataFrame.
    datos = datos.sort_values(by=["year"])
    X = datos["year"].values.reshape(-1, 1)
    Y = datos["selling_price"].values

    # Se hace la regresión lineal
    lineal = LinearRegression()
    lineal.fit(X, Y)
    yLineal = lineal.predict(X)
    print("Métricas de regresion lineal:",
          f"\n(R²): {r2_score(Y, yLineal)}",
          f"\n(MSE): {mean_squared_error(Y, yLineal)}",
          f"\n(MAE): {mean_absolute_error(Y, yLineal)}")

    # Se hace la regresión no lineal
    degree = 4
    noLineal = make_pipeline(PolynomialFeatures(degree), LinearRegression())
    noLineal.fit(X, Y)
    yNoLineal = noLineal.predict(X)
    print("\nMétricas de regresion no lineal:",
          f"\n(R²): {r2_score(Y, yNoLineal)}",
          f"\n(MSE): {mean_squared_error(Y, yNoLineal)}",
          f"\n(MAE): {mean_absolute_error(Y, yNoLineal)}")

    # Se muestran todos los puntos.
    plt.scatter(X, Y)

    # Se muestran las regresiones.
    plt.plot(X, yLineal, c="Red", label="Regresión lineal.")
    plt.plot(X, yNoLineal, c="Green",
             label=f"Regresión polinomica grado {degree}.")

    # Personalización
    plt.title("Precio en función del año de compra.")
    plt.xlabel("Año de compra.")
    plt.ylabel("Precio del carro.")
    plt.legend()
    plt.tight_layout()
    plt.show()


def kilometrajeXaño(datos):
    """Función para analizar el kilometraje de los carros en función
    al año de compra.
    """

    print("\n### Regresiones del kilometraje en función del año. ###")

    # Se extraen los datos del DataFrame.
    datos = datos.sort_values(by=["year"])
    X = datos["year"].values.reshape(-1, 1)
    Y = datos["km_driven"].values

    # Se hace la regresión lineal
    lineal = LinearRegression()
    lineal.fit(X, Y)
    yLineal = lineal.predict(X)
    print("Métricas de regresion lineal:",
          f"\n(R²): {r2_score(Y, yLineal)}",
          f"\n(MSE): {mean_squared_error(Y, yLineal)}",
          f"\n(MAE): {mean_absolute_error(Y, yLineal)}")

    # Se hace la regresión no lineal
    degree = 3
    noLineal = make_pipeline(PolynomialFeatures(degree), LinearRegression())
    noLineal.fit(X, Y)
    yNoLineal = noLineal.predict(X)
    print("\nMétricas de regresion no lineal:",
          f"\n(R²): {r2_score(Y, yNoLineal)}",
          f"\n(MSE): {mean_squared_error(Y, yNoLineal)}",
          f"\n(MAE): {mean_absolute_error(Y, yNoLineal)}")

    # Se muestran todos los puntos.
    plt.scatter(X, Y)

    # Se muestran las regresiones.
    plt.plot(X, yLineal, c="Red", label="Regresión lineal.")
    plt.plot(X, yNoLineal, c="Green",
             label=f"Regresión polinomica grado {degree}.")

    # Personalización
    plt.title("Kilometraje en función del año.")
    plt.xlabel("Año de compra.")
    plt.ylabel("Kilometraje del carro.")
    plt.legend()
    plt.tight_layout()
    plt.show()
