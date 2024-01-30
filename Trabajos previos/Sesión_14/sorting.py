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

# Se ordena el df por el valor de la edad.
ordenadoEdad = df.sort_values(by="Age").head()
print(ordenadoEdad, '\n')

# Se ordena por 2 categorias y de forma descendente
# Por como se dan los argumentos se ordena primero por OtroValor y si se repite
# el valor se ordena por edad.
dosOrdenados = df.sort_values(by=["OtroValor", "Age"], ascending=False).head()
print(dosOrdenados, '\n')


# Sortin por indice
# Primero se crea una serie que tiene un valor especifico en una categoria
serie100 = df[df["OtroValor"] == 100]

# Luego se ordena por el índice
# Además se agruparon por otra categoria.
porIndice = serie100.sort_index().groupby(["Name"]).head()
print(porIndice, '\n')
