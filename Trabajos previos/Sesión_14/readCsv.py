import pandas as pd

# Método para leer datos de un csv a un panda.
info = pd.read_csv("unCsv.csv")

# Se muestra el panda.
print(info)

# Se convierte a un archivo excel, se le da el nombre, nombre de la hoja y que
# sea sin indices.
info.to_excel("info.xlsx", sheet_name="Informacion", index=False)
