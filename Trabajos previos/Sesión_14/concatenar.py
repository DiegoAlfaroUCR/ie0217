import pandas as pd

# Se pueden concatenar dos dataFrames.

# Se crea el primer dataFrame
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

# Se crea el segundo dataFrame
dataF = pd.DataFrame(
    {
        "Name": ["Nombre nuevo"],
        "Age": [90],
        "Sex": ["male"],
    }
)


# Se unen ambos dataFrames con concat
ambos = pd.concat([df, dataF], axis=0)
print(ambos)
