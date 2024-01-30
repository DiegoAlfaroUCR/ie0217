import pandas as pd

# Se crea un DataFrame.
"""Se crean varios diccionarios donde las keys son las categorías
y el contenido de los diccionarios es cada celda. Las entradas de
cada diccionario se relacionan por índice: Allen tendrá age 35 y sex male.
"""
df = pd.DataFrame(
    {
        "Name": [
            "Braund, Mr. Owen Harris",
            "Allen, Mr. William Henry",
            "Bonnell, Miss. Elizabeth",
        ],
        "Age": [22, 35, 58],
        "Sex": ["male", "male", "female"],

    }  # Corchetes para definir la estructura del DataFrame

)


# Promedio
print(df["Age"].mean(), '\n')

# Media
print(df["Age"].median(), '\n')

# Describe
print(df["Age"].describe(), '\n')


# Se pueden agregar las categorias estadisticas a una variable
# Se puede hacer para varias variables con diferentes estadisticas.
agregado = df.agg(
    {
        "Age": ["min", "max", "median", "skew"],
    }
)

print(agregado, '\n')


# Estadisticas por valor de categoria
est = df[["Sex", "Age"]].groupby("Sex").mean()
print(est, '\n')


# Esta agrupa por sexo y nombre y da el promedio de la edad.
est2 = df.groupby(["Sex", "Name"])["Age"].mean()
print(est2, '\n')


# Estadisticas con todo lo que sea numerico
general = df.groupby("Sex").mean(numeric_only=True)
print(general, '\n')


# Otra forma
otra = df.groupby("Sex")["Age"].mean()
print(otra, '\n')


# Enumerar cantidad de valores por categoria
cant = df["Age"].value_counts()
print(cant, '\n')
