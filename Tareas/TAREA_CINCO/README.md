# Parte Teórica

## Iteradores

**1. ¿Qué es un iterador en Python y cuál es su propósito?**

Los iteradores son métodos que recorren elementos de un contenedor (o incluso objetos creados por el usuario) y accede a dichos elementos. Poseen el propósito de permitir la lectura y modificación de elementos guardados en objetos. Por ejemplo cuando se iteran números dentro de una lista para imprimirlos. Se definen por medio de métodos como `__iter__` en las clases de los objetos a iterar.

**2. Explica la diferencia entre un iterable y un iterador.**

Un objeto iterable es un tipo de objeto al que se le puede aplicar un iterador y así acceder a métodos de dicho objeto. Un iterador es el método empleado sobre un objeto iterable, que puede iterar sobre elementos dentro de este y define que se debe hacer al iterar en el objeto. Un iterable es un objeto que se puede iterar, mientras que un iterador es un método que define el comportamiento de iteraciones sobre un objeto iterable.

## Excepciones

**1. Define qué es una excepción en Python.**

En python las excepciones son estados/errores que se levantan cuando se da un evento dentro del programa que no permite el funcionamiento de este. Estas excepciones son levantadas en el punto del código donde se da el evento y pueden causar el colapso del programa si no son manejadas correctamente. Se puede dar un manejo de estas por medio de bloques try/except. Existen diversos tipos de excepciones, por ejemplo por intentar realizar una división con denominador 0 (ZeroDivisionError).  

**2. ¿Cuál es el propósito de la cláusula try...except en el manejo de excepciones?**

Los bloques try/except permiten capturar excepciones y manejar como responde el programa cuando estas ocurren. El bloque try incluye un conjunto de líneas en las cuales puede ocurrir una excepción, y si esta se dá no se cierra el programa, sino se ejecuta el bloque except. El bloque except incluye código que se ejecuta cuando se levanta una excepción en el bloque try, pueden darse varios bloques except dependiendo del tipo de excepción levantada en el bloque try. Estos se usan para manejar como responde el programa a errores esperados, así se puede evitar el colapso del programa en casos donde se quiera evitar.

**3. Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones.**

El bloque except solo se llama si la excepción al que corresponde se elevanta en su bloque try. En cambio, el bloque finally siempre se ejecuta, indiferentemente de cualquier excepción levantada o no. El except se usa para el manejo de una excepción levantada, el finally siempre se ejecuta.

## Generadores

**1. ¿Qué es un generador en Python y cuál es su ventaja sobre las listas tradicionales?**

Los generadores son expresiones que permiten retornar varios elementos de una sola función sin tener que almacenarlos localmente. Estos se pueden usar por medio del operador yield el cual "retorna" un elemento sin salir de la función, al retornar varios se retorna una lista de estos elementos. Existen otras expresiones que funcionan como generadores, por ejemplo por medio de sintaxis similar a list comprehension: (for x in y return x). Tienen la ventaja de que son más eficientes en términos de memoria y pueden hacer el código más compacto y legible.

**2. Explica cómo se puede crear un generador usando la función yield.**

Un generador creado con el operador yield se escribe de la misma manera que una función normal que retorna una lista, pero en vez de agregar los elementos a una lista vacía y retornarla, se usa yield como un tipo de return en el elemento a agregar. Un ejemplo de un generador para retornar una lista de números descendientes desde un número dado a 0 usando yield:

```
def descendientes(numero):
    while numero >= 0:
        yield numero
        numero -= 1
```

**3. ¿Cuándo es más apropiado usar generadores en lugar de listas?**

Es más apropiado usar generadores cuando la lista es solo una variable intermediaria al propósito del programa, osea cuando no se requiere volver a iterar sobre la lista. Se deben usar listas si se quieren incluir los métodos de listas dentro de la funcion que genera el conjunto de datos. Algunos casos donde los generadores son más útiles son en casos donde se programan secuencias infinitas, o cuando el desempeño del programa es crucial.

## Pandas

**1. ¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas?**

Ambos tipos de datos son objetos del módulo pandas, pero se diferencian en la dimensión de datos que pueden contener. Un DataFrame es un objeto que incluye varias categorías de datos, similar a una matriz con varias columnas. Mientras que una Serie es un objeto que solo puede contener una categoría de dato, se podría pensar como una sola columna de datos. 

**2. Explica cómo manejar valores nulos o faltantes en un DataFrame.**

Existen métodos como `notna()` y `isna()` que permiten identificar los elementos dentro de un DataFrame que son nulos, no existen o son clasificados como NaN. Al usar estos métodos con métodos de filtrado se pueden obtener los datos que son (o no son) nulos o faltantes en un DataFrame. Por ejemplo para obtener los elementos de un DataFrame llamado df que no son nulos en una categoria se puede hacer: `df[df["categoria"].notna()]`. De esta manera se pueden realizar análisis en un conjunto de datos que contienen datos nulos sin tener que manualmente eliminar dichos datos del conjunto. [1]

**3. ¿Cuál es la diferencia entre loc y iloc en Pandas?**

Los métodos loc y iloc son métodos que permiten acceder a elementos de un DataFrame dependiendo del índice o condiciones de los elementos. Ambos se diferencian según la forma en la que tratan los argumentos que se les pasan. loc opera según los nombres de las categorías y marcadores de los elementos, por ejemplo si se usa loc para encontrar el elemento con índice 0 de un DataFrame de esta manera: `df.loc[0]`, esto accede al elemento con índice 0 pero no necesariamente es el primer elemento. Por otro lado, si se usa `df.iloc[0]` en el mismo DataFrame se retorna el primer elemento, no necesariamente el elemento con índice 0 [2]. Además loc permite obtener elementos según condiciones booleanas de dichos elementos, mientras que iloc no. Por ejemplo: `df.loc[df["Categoria"] > num]` retorna un DataFrame con todos los elementos que cumplen la condición, esto no se puede hacer con iloc [2].

# Referencias

[1] https://pandas.pydata.org/docs/user_guide/missing_data.html

[2] https://stackoverflow.com/questions/31593201/how-are-iloc-and-loc-different



