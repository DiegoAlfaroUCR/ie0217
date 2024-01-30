import pandas as pd

# Método para leer de un archivo excel

# Se le pasa el archivo y la hoja a copiar
leido = pd.read_excel("info.xlsx", sheet_name="Informacion")

# Con método info se da informacion general del df.
leido.info()
