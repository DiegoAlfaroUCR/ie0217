import pandas as pd

# Método para leer datos de un csv a un panda.
# Al dar parse_dates=True se deberían tomar en cuenta las fechas del csv.
info = pd.read_csv("unCsv.csv",  parse_dates=True)
print(info, '\n')
