import pandas as pd

# Son conjuntos de un solo tipo.

# Este es igual al df["Age"] del pasado
ages = pd.Series([22, 35, 58], name="Age")

# No tienen etiquetas de columnas, solo de filas.
print(ages)

# Se puede usar máx para encontrar el maximo.
print(ages.max())
