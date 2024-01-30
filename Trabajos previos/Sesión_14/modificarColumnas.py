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

# Se crea una cuarta categoria con datos de age y un escalar
# Con solo asignarla ya se crea automaticamente.
df["Categoria nueva"] = df["Age"] * 100
print(df, '\n')


# Se puede operar con las series
df["Categoria nueva"] = df["Categoria nueva"] / df["Age"]
print(df, '\n')


# Renombrar categorias
df_renombrada = df.rename(
    columns={
        "Name": "Nombre",
        "Age": "Edad",
        "Sex": "Sexo",
    }
)
print(df_renombrada, '\n')


# Pasar de mayuscula a minuscula
df_renombrada = df.rename(columns=str.lower)
print(df_renombrada, '\n')
