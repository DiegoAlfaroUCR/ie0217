# Instrucciones de ejecución
La parte práctica de esta tarea incluye la elaboración de dos programas de análisis de datos, con su propio Makefile para ejecutarlo. El código fuente del programa se encuentra en el directorio [src](/Tareas/TAREA_CINCO/src/) y el [Makefile](/Tareas/TAREA_CINCO/Makefile) se encuentra en el directorio actual. Para iniciar ambos programas, en el orden de parte1 y luego parte2, solo debe correr el comando make en la carpeta actual (ie0217\Tareas\TAREA_CINCO).

Windows (depende de su configuración de mingw):
```
mingw32-make
```

Linux:
```
make
```

# Parte Práctica

## Parte 1: Análisis

Conforme al análisis realizado en la primera parte, primero se realizó un análisis general de todas las aerolineas, y luego se escogió hacer un análisis más exhaustivo de una sola aerolínea (la que registró la mayor cantidad de vuelos).

### Análisis general

Primeramente se encontraron la cantidad total de vuelos y pasajeros registrados de cada aerolinea, y se mostraron en forma de lista. En adelante una muestra de algunas de estas:

```
Wright Air Service             Pasajeros: 66275      Vuelos: 1649
Cape Air                       Pasajeros: 278395     Vuelos: 758
Southern Airways Express       Pasajeros: 363246     Vuelos: 1136
American Airlines Inc.         Pasajeros: 109466007  Vuelos: 9130
ABX Air Inc                    Pasajeros: 0          Vuelos: 833
Air Canada                     Pasajeros: 11945      Vuelos: 212
Antonov Company                Pasajeros: 0          Vuelos: 17
Ameristar Air Cargo            Pasajeros: 1163       Vuelos: 484
ADVANCED AIR                   Pasajeros: 35070      Vuelos: 791
Alaska Airlines Inc.           Pasajeros: 27804289   Vuelos: 4508
JetBlue Airways                Pasajeros: 27134084   Vuelos: 4400
Baranautica Air Service LLC    Pasajeros: 255        Vuelos: 45
CommuteAir LLC dba CommuteAir  Pasajeros: 2561293    Vuelos: 1670
```

De esta gran cantidad de aerolíneas se encontraron varais con una cantidad 0 de pasajeros, indicando que no solo se registran vuelos que transportan personas sino también vuelos que solo llevan cargo. También se mostró que la cantidad de pasajeros de algunas aerolineas como `American Airlines Inc` o `Delta Air Lines Inc.` son muy altas aún cuando la cantidad de vuelos realizados parecen no ameritar dichas cantidades. Esto indica que son aerolineas con aviones de gran tamaño que permiten transportar cantidades altas de pasajeros por viaje.

También se registran algunas aerolineas con solo un vuelo, indicando que la base de datos no solo registra aerolineas comunes, sino todas aquellas que entran en el scope de esta.

```
Sparfell Luftfahrt GmbH        Pasajeros: 4          Vuelos: 1
Gainjet Aviation SA            Pasajeros: 5          Vuelos: 1
ABS JETS A.S                   Pasajeros: 5          Vuelos: 1
Avcon Jet AG                   Pasajeros: 30         Vuelos: 4
Hamilton Jetport Limited       Pasajeros: 7          Vuelos: 1
AVCON JET MALTA LTD            Pasajeros: 14         Vuelos: 2
Key Lime Air Corporation       Pasajeros: 185806     Vuelos: 321
Pathfinder Aviation            Pasajeros: 319        Vuelos: 18
KaiserAir                      Pasajeros: 5680       Vuelos: 47
Via Airlines d                 Pasajeros: 10733      Vuelos: 26
VRG Linhas Aereas S A          Pasajeros: 358        Vuelos: 3
Friday Harbor Seaplanes        Pasajeros: 3481       Vuelos: 12
Titan Airways                  Pasajeros: 54         Vuelos: 1
Westjet                        Pasajeros: 159        Vuelos: 2
Aerolitoral                    Pasajeros: 68         Vuelos: 1
Jazz Aviation LP               Pasajeros: 70         Vuelos: 1
Taca International Airlines    Pasajeros: 85         Vuelos: 1
Boutique Air                   Pasajeros: 26132      Vuelos: 86
Condor Flugdienst              Pasajeros: 325        Vuelos: 2
Comlux Aruba NV                Pasajeros: 161        Vuelos: 1
Aeroenlaces Nacionales         Pasajeros: 182        Vuelos: 1
Air Canada rouge LP            Pasajeros: 703        Vuelos: 3
China Eastern Airlines         Pasajeros: 259        Vuelos: 1
Iberia Air Lines Of Spain      Pasajeros: 2665       Vuelos: 9
Norse Atlantic UK Ltd          Pasajeros: 290        Vuelos: 1
```

Finalmente, se encontraron algunas estadisticas de los vuelos y pasajeros en general:

```
Aerolinea con mayor cantidad de vuelos: Southwest Airlines Co. con 36752 vuelos.
 La cantidad promedio de vuelos fue: 1429.3783783783783

Aerolinea con mayor cantidad de pasajeros totales: Southwest Airlines Co. con 139122424 pasajeros.
 La cantidad promedio de pasajeros fue 4630869.040540541
```

Esto identifica a `Southwest Airlines Co.` como la aerolínea con mayor cantidad de tráfico en la base de datos registrada, con sus cantidades de vuelos y pasajeros sobrepasando fuertemente el promedio de las demás aerolineas.

### Análisis específico

Se tomó a la aerolínea con más datos a considerar según el análisis anterior (`Southwest Airlines Co.`) y se le realizaron pruebas más profundas.

#### Vuelos por mes

Se registraron la cantidad de vuelos realizados por la aerolinea durante los meses disponibles (de enero a octubre):

```
Enero presentó 3817 vuelos.
Febrero presentó 3012 vuelos.
Marzo presentó 3768 vuelos.
Abril presentó 3850 vuelos.
Mayo presentó 3385 vuelos.
Junio presentó 3583 vuelos.
Julio presentó 3846 vuelos.
Agosto presentó 3385 vuelos.
Septiembre presentó 3964 vuelos.
Octubre presentó 4142 vuelos.

Mes con mayor cantidad de vuelos: Octubre
```

Estos datos se pueden visualizar más claramente en el siguiente gráfico, la linea indica meses con disminuición notable en vuelos como febrero, mayo y agosto y picos en octubre, julio y abril.

![](/Tareas/TAREA_CINCO/img/vuelosXmes.png)

#### Vuelos por ciudad

Se registraron la cantidad de vuelos realizados por la aerolinea según las ciudades registradas, se consideraron si fueron de salida o de entrada a dicha ciudad. En adelane una muestra pequeña de los datos:

```
BLI fue destino de 100 vuelos y salida de 97 vuelos
BNA fue destino de 753 vuelos y salida de 771 vuelos
BOI fue destino de 232 vuelos y salida de 207 vuelos
BOS fue destino de 360 vuelos y salida de 317 vuelos
BUF fue destino de 226 vuelos y salida de 251 vuelos
BUR fue destino de 395 vuelos y salida de 400 vuelos
BWI fue destino de 822 vuelos y salida de 820 vuelos
BZN fue destino de 142 vuelos y salida de 125 vuelos
CHS fue destino de 226 vuelos y salida de 227 vuelos
CLE fue destino de 325 vuelos y salida de 301 vuelos
CLT fue destino de 221 vuelos y salida de 209 vuelos
CMH fue destino de 446 vuelos y salida de 425 vuelos
```

Para comparar los vuelos entre las ciudades tomando en cuenta si son de salida o de entrada, se realizó un gráfico de barras con dos barras por ciudad, este gráfico es bastante extenso pero muestra como ciertas ciudades son notablemente más transitadas que otras. Mientras que la mayoría se encuentran en los mismos rangos (0 a 400 vuelos) existen 23 ciudades que pasan este rango y llegan hasta los 1000 vuelos registrados. La más prominente fue `DEN` o `Denver`.

![](/Tareas/TAREA_CINCO/img/vuelosXciudad.png)

#### Pasajeros por mes

Se registraron la cantidad de pasajeros atendidos por la aerolinea dependiendo del mes disponible (de enero a octubre), estos mostraron distribuciones parecidas y muy altas en cada mes:

```
Enero presentó 11422335 pasajeros.
Febrero presentó 11221487 pasajeros.
Marzo presentó 13968009 pasajeros.
Abril presentó 13860582 pasajeros.
Mayo presentó 14772107 pasajeros.
Junio presentó 14950131 pasajeros.
Julio presentó 15491104 pasajeros.
Agosto presentó 14130349 pasajeros.
Septiembre presentó 13916694 pasajeros.
Octubre presentó 15389626 pasajeros.

Mes con mayor cantidad de pasajeros: Julio
```

Estos se visualizaron a través de un pie chart, que indica que la distribucion de pasajeros por mes fue muy parecida, pero si se notaron las diferencias. Por ejemplo, febrero fue el que tuvo menor cantidad, con solo 8.1% comparado al mayor (octubre) con 11.1%

![](/Tareas/TAREA_CINCO/img/pasajerosXmes.png)


#### Pasajeros por cantidad de vuelos

Finalmente, se comparó la cantidad de vuelos con la cantidad de pasajeros registrados en una misma ciudad para la aerolínea `Southwest Airlines Co.`. Para filtrar los datos se escogió analizarlo según las ciudades de destino, así para no mezclar pasajeros de destino con vuelos de salida y viceversa. Se da una pequeña muestra de los datos:

```
818 vuelos trajeron 6299222 pasajeros.
363 vuelos trajeron 923042 pasajeros.
187 vuelos trajeron 208233 pasajeros.
196 vuelos trajeron 260918 pasajeros.
282 vuelos trajeron 481173 pasajeros.
136 vuelos trajeron 163820 pasajeros.
4 vuelos trajeron 519 pasajeros.
```

Para comparar estos se hizo un gráfico de puntos con la cantidad de pasajeros en función de la cantidad de vuelos. Note que el eje de los pasajeros posee unidades de 1*10^7. Este mostró lo esperado, pues la relación entre la cantidad de pasajeros y la cantidad de vuelos es proporcional, entre más vuelos se hayan hecho más pasajeros se llevaron. Aún así, la relación entre estos no es lineal sino exponencial, por lo que se infiere que la cantidad total de pasajeros aumenta drásticamente por otros factores. Uno de estos factores puede ser que según en las ciudades donde se hacen más vuelos se usan aviones con más capacidad.

![](/Tareas/TAREA_CINCO/img/pasajerosXvuelos.png)

### Aplicaciones

Por medio de un análisis como el hecho aquí, se pueden identificar tendencias sobre el flujo de tráfico aereo de forma profunda. Por ejemplo, utilizando los datos de la cantidad de vuelos por ciudad, es posible decidir cuales aeropuertos/ciudades requieren mayor atención en términos de mantenimiento y seguridad. Por medio de los análisis según los meses se pueden determinar las épocas con mayor cantidad de tráfico, significando más comercio en las ciudades listadas, en los aeropuertos e incluso otros factores como las emisiones de CO2 o el esparcimiento de virus como el COVID-19. Este último punto es un caso de análisis que podría utilizar todas las conclusiones ya alcanzadas, ya que el conocer como se comporta el flujo de grandes cantidades de personas a través de estados permite atribuir a la presencia de brotes y picos en las métricas del COVID-19. Finalmente, pese a que estos hallazgos no son revoulcionarios de ninguna manera, representan una forma simple y confiable de analizar el transporte aéreo comercial.

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
