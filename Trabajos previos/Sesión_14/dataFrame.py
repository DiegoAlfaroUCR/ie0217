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


# Mostrar el dataFrame
print(df)


# Mostrar una columna del dataFrame
print(df["Age"])

# Mostrar los 2 primeros datos, si no se le da un
# argumento se imprimen todos.
print(df.head(2))

# Tipo de datos de categorias
print(df.dtypes)
