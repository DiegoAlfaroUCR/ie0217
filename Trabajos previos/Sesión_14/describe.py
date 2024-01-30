import pandas as pd

# Método describe retorna una serie de panda con info numérica de un DataFrame

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

# Note que se llama el describe en todo el dataFrame pero solo se
# usa en el dato numérico Age.
print(df.describe())
