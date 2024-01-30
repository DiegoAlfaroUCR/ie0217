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
        "OtroValor": [100, 200, 100]
    }  # Corchetes para definir la estructura del DataFrame

)

# Para hacer tablas pivot
# Esto hace que las columas den info por cada edad
# Los valores mostrados en la tabla son los OtroValor
tablaPivot = df.pivot(columns="Age", values="OtroValor")
print(tablaPivot, '\n')


# Pivot usando una función para modificar los valores
# de la tabla, se debe usar pivot_table() para usar aggfunc

# Es igual a la pasada pero con el promedio de cada uno.
# Se le puede agregar margenes
pivotMean = df.pivot_table(
    values="OtroValor", index="Age", columns="Name",
    aggfunc="mean", margins=True,
    )
print(pivotMean, '\n')


# Devolver tabla pivot a tabla normal
# NO SE PUEDE DEVOLVER UNA TABLA CREADA CON pivot_table() asi
devolver = tablaPivot.melt()
print(devolver)
