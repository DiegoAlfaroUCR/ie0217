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

# Se puede crear una serie de un DF:
ages = df["Age"]
print(ages.head(), '\n')

# Tiene tipo padas.core.series.Series
print(type(ages), '\n')

# Tiene tamaño dado con shape
print(ages.shape, '\n')

# Data frame con dos de las categorías.
age_sex = df[["Age", "Sex"]]

# Head() con condiciones del valor
sobre_35 = df[df["Age"] > 35]
print(sobre_35.head(), '\n')

# Filtra por los que tienen valores 22 o 35 en una categoria
class_23 = df[df["Age"].isin([22, 35])]
print(class_23.head(), '\n')

# Misma manera
class_23 = df[(df["Age"] == 22) | (df["Age"] == 35)]
print(class_23.head(), '\n')


# Forma de filtrar para excluir los que no son números
age_no_na = df[df["Age"].notna()]
print(age_no_na.head(), '\n')


# Obtener un atributo a partir de condicion de otro
# el loc indica location
adult_names = df.loc[df["Age"] > 35, "Name"]
print(adult_names, '\n')


# Filtrar por indices y filas
# Se leen los indices de 1 a 2, con las filas de 2 a 3
print(df.iloc[1:2, 2:3], '\n')


# Tambien se puede editar
df.iloc[0:2, 2] = "editado"
print(df)
