# Instrucciones de ejecución
La parte práctica de esta tarea incluye la elaboración de un paquete con la función de analizar un conjunto de datos, con su propio Makefile para ejecutarlo. El código fuente del programa se encuentra en el directorio [src](/Tareas/TAREA_SEIS/src/) y el [Makefile](/Tareas/TAREA_SEIS/Makefile) se encuentra en el directorio actual. Para iniciar el programa solo debe correr el comando make en la carpeta actual (ie0217\Tareas\TAREA_SEIS).

Windows (depende de su configuración de mingw):
```
mingw32-make
```

Linux:
```
make
```

# Parte Práctica: Análisis

Conforme a los datos a analizar, se tomaron los datos encontrados en la base de datos de carros encontrada en: https://www.kaggle.com/datasets/akshaydattatraykhare/car-details-dataset. Entre los datos registrados para cada carro, se incluyeron la fecha de compra, el kilometraje del carro y el precio de venta del carro, estos fueron los datos escogidos para realizar el análisis.

## Regresiones

Se realizaron regresiones para predecir tendencias en el comportamiento de los datos. Para cada una se realizó primero una regresión lineal y luego una regresión polinómica. Ambas se graficaron en conjunto para mostrar la diferencia entre estas. Además, se encontraron las métricas de error de cada regresión para comprar que tan aproximadas fueron las predicciones.

### Precio vs Año
La primera de estas fue buscando la relación entre el precio de venta del carro en función al año de venta. Esta mostró una relación aparentemente no lineal, donde el precio se mantuvo similar hasta que el año pasó de 2005. Luego del 2005 se mostró un aumento considerable en los precios registrados, llegando a ser hasta 8 veces más alto que los previos al 2005. Es importante notar que la escala de los precios es de 1x10</sub><sup>6</sup>.

![](/Tareas/TAREA_SEIS/img/reg_precioXaño.png)

Debido a la alta cantidad de puntos no se logra expresar de manera exacta una regresión general, pero se nota que ambas regresiones muestran la naturaleza del aumento del precio. Sin embargo la regresión polinómica es más exacta pues si se acopla bien a los primeros valores. Las métricas de error de las regresiones evidencian esta conclusión:

```
### Regresiones del precio en función del año de compra. ###
Métricas de regresion lineal: 
(R²): 0.17133115701744017 
(MSE): 277306997858.82544 
(MAE): 268856.6053436599

Métricas de regresion no lineal: 
(R²): 0.19271685574220287 
(MSE): 270150455217.33737 
(MAE): 255503.81371500393
```

Se observa que el coeficiente R2 de la regresión polinomica es ligeramente mejor al de la lineal, pero no en gran cantidad. Por otro lado, el MSE se mantiene ligeramente mayor al MAE, indicando que se encuentran valores atípicos que afectan los resultados. Estos se pueden visualizar en la parte superior derecha de la figura.

### Kilometraje vs Año
Luego se generó una regresión referente al kilometraje del carro en función del año de venta. Estos datos presentaron una forma no lineal, con forma similar a una distribución normal. Esto pues el kilometraje aumenta conforme aumentan los años, pero luego empieza a descender. Esta forma se aprecia de mejor manera con la regresión polinómica, pero aún así no se muestran las tendencias exactamente.

![](/Tareas/TAREA_SEIS/img/reg_kiloXaño.png)

El error de la regresión lineal fue mucho pero que la regresión polinómica, esto denotado por el coeficiente R2. Esto es por la forma creciente y luego decreciente de la distribución. Además se nota que similar a las regresiones pasadas, la regresión polinómica fue capaz de mantenerse dentro de los datos graficados y la lineal no.

```
### Regresiones del kilometraje en función del año. ###
Métricas de regresion lineal:
(R²): 0.17613813996251204
(MSE): 1792040395.0437098
(MAE): 28992.169678791877

Métricas de regresion no lineal:
(R²): 0.248497380760755
(MSE): 1634646675.592677
(MAE): 26973.569851923647
```

Por parte del MSE y MAE, se nota que el MAE es mucho mayor al MSE. Esto indica que la magnitud del error promedio con la predicción es alta, mientras que se no hay tanto error con respecto a valores atípicos.

## Clustering
Finalmente, se realizó un proceso de agrupamiento de los carros según sus características por medio de la librería K-MEANS. Se realizaron dos de estas agupaciones, una reflejando la regresión Precio vs Año y la otra relacionando el precio de venta con el kilometraje del carro. Previo a cada proceso de clustering se realizó un análisis de la cantidad de clusters óptima a utilizar. Para cada uno se empleó un método distinto, una siendo con el método del codo (inercias) y otra con el método de silueta (siluetas). Una vez se obtiene la cantidad de clusters se generan con dicha cantidad.

### Precio y Kilometraje

Para los clusters que toman en cuenta el precio y el kilometraje de los carros, se utilizó el método del codo para encontrar la cantidad de clusters a usar. Al graficar las inercias de diferentes modelos de clustering se obtiene el siguiente gráfico:

![](/Tareas/TAREA_SEIS/img/metodoCodo.png)

Debido a que la métrica de inercias indica un mejor modelo de clustering entre menor sea, se podría elegir una cantidad de clusters alta como 10, pero la ganancia es poca relativa al tiempo de procesamiento y a la sobrecarga de grupos. Por esto se decide emplear una cantidad de 5 clusters, ya que es lo suficientemente optimizada pero no llega a generar demasiadas agrupaciones. Con este modelo se generan las siguientes agrupaciones:

![](/Tareas/TAREA_SEIS/img/clustersCodo.png)

De estas agrupaciones se pueden inferir que los carros se pueden agrupar por los rangos del precio de venta. Se denota que la agrupación es principalmente por el precio y no por el kilometraje, pues los puntos a la derecha del gráfico coinciden en cluster con los de su mismo nivel de precio. Estos rangos no son proporcionales, pues los primeros tres grupos son de menor tamaño que los 2 superiores. La densidad de estos niveles indica que la mayoría de los carros se encuentran en estos niveles inferiores y bajo un rango común de 0 a 300000km de kilometraje. Por otro lado, carros más costosos no presentan kilometrajes altos, ya que no suben de alrededor de los 100000km de kilometraje. Los carros con kilometrajes muy altos poseen precios que los colocan en grupos de precios bajos. 

### Precio y Año

Finalmente, se empleó una agrupación de clusters por medio de las categorías del precio y el año de venta. Primero se empleó el método de siluetas para determinar la cantidad de clusters apropiada a usar. En el siguiente gráfico se muestran los puntajes de las siluetas de los modelos de clustering según la cantidad de clusters:

![](/Tareas/TAREA_SEIS/img/metodoSilueta.png)

Es importante denotar que los puntajes de siluetas se consideran mejores entre más cercanos sean a 1. En este caso el análisis muestra que el menor número de clusters (2) es el más cercano a esta métrica. Al generar la agrupación con esta cantidad de clusters se genera la siguiente gráfica:

![](/Tareas/TAREA_SEIS/img/clustersSilueta.png)

Los clusters generados no son tan descriptivos como los de la sección pasada, pero se puede inferir la razón dada por el análisis de la silueta. Se nota como la cantidad de carros con un precio de venta alrededor de 2 000 000 o menor, es mucho mayor a los que poseen un precio de venta mayor a 2 000 000. Se puede notar que la densidad de puntos en el cluster menor a 2 000 000 es muy alta, mientras que los puntos en el cluster superior son más dispersos. De esto se puede concluir que los carros con precios de venta muy altos son menores y poseen precios más distintos entre sí. Esto es debido a que, estatísticamente, con una población normal la mayoría de carros serán de valor promedio, y estos valores de venta son más similares por la competencia entre sí. Por otro lado los carros de mayor valor poseen precios más extravagantes y por ende son más dispersos.

# Parte Teórica

## Regresión:
**1. ¿Qué es la regresión lineal y cómo se diferencia de la regresión no lineal?**

Las regresiones lineales/no lineales son métodos de análisis matemático de datos, en los cuales se generan modelos o fórmulas que intentan predecir/aproximar el comportamiento de un conjunto de datos a partir de variables independientes y dependientes. Las regresiones lineales aplican modelos/fórmulas lineales, aquellas que se aproximan a la fórmula de una recta y = m<sub>1</sub>x<sub>1</sub> + b<sub>1</sub> + m<sub>2</sub>x<sub>2</sub> + ..., donde las variables independientes poseen grado 1. A diferencia de estas, las regresiones no lineales aplican modelos con fórmulas donde las variables independientes poseen grado igual o mayor a 1; y = m<sub>1</sub>x<sub>1</sub> + b<sub>1</sub> + m<sub>2</sub>x<sub>2</sub><sup>2</sup> + ...

**2. ¿Qué son los coeficientes de regresión y qué información proporcionan sobre la relación entre las variables?**

Los coeficientes de regresión son las constantes que se obtienen de una regresión las cuales ayudan a describir el modelo. Estos coeficientes indican la relación entre las variables independientes del modelo con la variable dependiente. Por ejemplo, si se hace una regresión lineal simple, 'y = mx + b', con 'x' como la variable independiente y 'y' la variable dependiente, el coeficiente de regresión obtenido seria la pendiente 'm'. En este caso el coeficiente describe la pendiente o la tasa de cambio de 'y' con respecto a 'x'.

**3. ¿Qué es el error cuadrático medio (MSE) y cómo se utiliza para evaluar la precisión de un modelo de regresión?**

El error cuadrático medio (MSE) es un tipo de evaluación o métrica para evaluar la presición de un modelo de regresión con respecto a los datos en los que se basó el modelo. Este se calcula por medio del cálculo del promedio de los errores cuadrados entre los valores predictos y los valores reales. Los errores se calculan por medio de la distancia entre el punto predicto y el punto real originados de las mismas preimagenes (por ejemplo del mismo eje x). El MSE indica un error donde se da más peso a los errores más grandes obtenidos de los puntos. Esto permite resaltar el error de valores atípicos o particularmente alejados de los reales. Así, si se quiere evaluar un set de datos con el cuidado de que sea un modelo acertado a cada punto, se puede usar el MSE para verificar dicha condición.

**4. ¿Cuál es la diferencia entre regresión simple y regresión múltiple y cuándo se utiliza cada una?**

La regresión simple solo incluye una variable independiente para generar la variable dependiente. En cambio, la regresión múltiple involucra varias variables para generar la misma variable dependiente. La diferencia es que la regresión múltiple usa fórmulas con más de una variable independiente. Se debe utilizar cada tipo según el modelo que se quiera analizar, por ejemplo si una variable es afectada por más de una condición es más apto utilizar la regresión múltiple.

## Clustering:
**1. ¿Qué es el clustering y cuál es su objetivo principal en el análisis de datos?**

El clusterin es un método de análisis de datos en el que se agrupan subconjuntos de datos, tomados de un mismo conjunto de datos, según características de estos. Un cluster es una porción de datos que pertenecen al mismo grupo. Por ejemplo, si se tiene un conjunto de puntos se pueden agrupar según que tan cerca están entre sí, o un grupo de objetos según sus atributos. El objetivo princpal del clustering es poder agrupar el conjunto de datos y así diferenciar entre ellos.

**2. Describa brevemente los algoritmos K-Means y DBSCAN y cómo funcionan.**

* K-Means: Agrupa el conjunto en una cantidad k de grupos según la similitud entre sus características. Al indicar una cantidad k de grupos al algoritmo, este encuentra k centroides iniciales, estos son puntos distribuidos a través del conjunto que funcionan como el centro de un cluster. A cada cluster se asignan los puntos vecinos según su cercanía al centroide. Al asignar una cierta cantidad de puntos al cluster se redefine el centroide como el promedio de los puntos del cluster y se repite el proceso.

* DBSCAN: Agrupa el conjunto basado en la densidad de puntos por vecindario en vez de la distancia entre puntos. Identifica automáticamente la cantidad de clusters a generar, aún si son de formas irregulares. Se clasifican los puntos en tres tipos; Core Points (puntos con una cantidad mínima de puntos en su vecindario), Border Points (puntos contenidos en el vecindario de Core Points pero no poseen la cantidad mínima de puntos para ser Core Points) y Noise Points que no entran en ninguna de las otras categorías.

**3. ¿Qué es la inercia en el contexto del clustering y cómo se utiliza para evaluar la calidad de un agrupamiento?**

La inercia es una métrica que permite determinar que tan correctamente se agrupó el conjunto de datos en un proceso de clustering. La inercia indica que tanto se separan los puntos de sus centroides (realmente se suman el cuadrado de estas diferencias) [1]. Se pueden utilizar para evaluar la calidad de agrupamientos ya hechos, ya que si se da una métrica de inercia muy alta el modelo de agrupamiento no es muy favorable. Además, se puede utilizar para escoger el modelo mas apropiado a un conjunto de datos, comparando las inercias de cada modelo.

**4. ¿Qué son los centroides y cómo se utilizan en el algoritmo K-Means?**

Los centroides son los "centros" de clusters de datos. Más que centros geométricos, son posiciones que representan el promedio del cluster en sus características. En el algoritmo K-means permiten iniciar el proceso al escoger centroides arbitrarios y compararlos con los puntos vecinos. Dentro del algoritmo los centroides cambian constantemente, pero al final representan el promedio de los puntos del cluster.

**5. Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos.**

Los datos estructurados son aquellos que previo al análisis de datos son procesados para ser organizados de manera estructurada, por ejemplo conjuntos de datos agrupados según características como en clustering. Por otro lado, los no estructurados son analizados sin ser organizados previamente. Ambos representan los mismos datos pero los estructurados son presentados de una manera más organizada, y permiten un análisis más accesible y completo. 

## Paquetes en Python ( init .py):
**1. ¿Qué es un paquete en Python y cómo se diferencia de un módulo?**

En Python los módulos son archivos .py en los que se contienen funciones/clases/métodos/variables que se quieren usar en otros archivos/programas. Los paquetes son conjuntos estructurados de módulos, estos permiten importar varios módulos en un mismo import [2]. Los paquetes se estructuran de manera que se guardan los distintos paquetes en directorios dentro de una misma carpeta con el nombre del paquete [3]. Para hacer esto se deben incluir archivos con el nombre __init__.py los cuales le indican al interprete que debe importar los módulos guardados en el directorio con los módulos. Sin el archivo el directorio no es tomado en cuenta, por lo que los __init__.py son fundamentales al crear paquetes. Pese a que pueden ser archivos vacíos, son útiles para especificar comportamientos a la hora de importar el paquete. Por ejemplo si se importa con el operador *, el archivo __init__.py debe contener una lista __all__ que indica cuales módulos se incluyen en dicho import [3].

**2. ¿Cuál es la función del archivo __init__.py dentro de un paquete de Python?**

Un archivo init.py es un archivo que al importarse un paquete se llama implicitamente durante el proceso, y permite definir variables del paquete [3]. El rol más importante del archivo init.py es señalarle al interprete que los directorios que lo contienen son módulos que forman parte del paquete y que se deben incluir al importar el paquete como tal. [2]

**3. ¿Cómo se importa un módulo o función desde un paquete en Python?**

Para importar un módulo/función desde un paquete se puede escribir la línea `from paquete import modulo, funcion` para importar ambos el módulo y la función buscados. Esto permite especificar al interprete cual función/módulo en específico debe importar del paquete. Esta forma no es la única, pues se puede importar el paquete como tal y utilizar la función, pero esto requiere especificar el paquete y módulo del que se origina cada vez que se llama la función.

**4. ¿Qué es la variable __all__ en el archivo __init__.py y cuál es su propósito?**

La variable `__all__` contenida en el archivo `__init__.py` de un paquete, contiene una lista de módulos que se deben incluir cuando el usuario desea importar todos los módulos por medio de la línea `from paquete import *`. La línea `from paquete import *` se usa cuando se quieren importar todos los módulos de un paquete, pero importar todos los archivos de un paquete podría generar errores. Por esto, se le permite al creador del paquete definir en la variable `__all__` cuales son los paquetes a incluir para dicha función sin generar problemas en el código. [2]

**5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?**

El organizar un programa en paquetes y módulos se puede garantizar orden, claridad y eficiencia. Un paquete estructurado tiene mayor orden a un paquete que incluye todas sus funcionalidades en un mismo directorio accedido por el mismo import, este orden facilita el entendimiento del paquete y ayuda a aquellos que quieran comprender su funcionamiento. Además, si se organiza en paquetes y módulos, el código se puede importar parcialmente en otros programas, es decir no se importan todos los módulos. Esto permite un uso más claro (se es más explicito sobre cuales módulos se usan y cuales no) y más eficiente (al solo importar lo necesario se reduce el costo de procesamiento en importar modelos no usados).

## Python HTTP y Servicios Web (API):
**1. ¿Qué es una API y cuál es su función en el contexto de los servicios web?**

Un API o Application Programming Interface, es una interfaz intermedia entre la estructura interna de una página web y una entidad que quiera interactuar con dicha estructura interna. Las API se componen de reglas y comandos que permiten la transferencia de información entre la entidad que usa la API y el servicio web que la emplea. Dependiendo del servicio que emplea la API, esta se puede usar para comunicar información entre una computadora cliente y el servidor web, utilizar funciones de la página web, crear programas que funcionan en la web, etc.

**2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP?**

Ambos REST (o RESTful API [4]) y SOAP son mecanismos para intercambiar datos, pero mientras que REST es una arquitectura (estructura de las funciones de comunicación), SOAP es un protocolo (set de instrucciones de como se debe comunicar la página). Esto significa que al comunicarse, SOAP provee funciones que permiten acceder a los datos, mientras que REST provee los datos en un formato específico. Tienen diferencias entre los tipos de datos que pueden manejar, por ejemplo SOAP solo permite transferencia de datos XML, mientras que REST permite XML, JSON, HTML, etc. En terminos de seguridad SOAP es capaz de aplicar más medidas de seguridad, pero es más lento que REST. Finalmente, sus aplicaciones son distintas, por ejemplo si se quiere aplicar a un servicio privado, SOAP es mas apropiado, en cambio un servicio público vería más eficiencia con REST. [5]

**3. Describa los pasos básicos para consumir una API utilizando Python.**

Primero se deben incluir las herramientas necesarias para interactuar con API, siendo el paquete requests. Si se quieren obtener datos de la API que opera con HTTP se puede emplear un GET para obtener los datos proporcionados por la API. Los datos se pueden formatear por medio de JSON y luego procesarlos por medio de diccionarios. Luego, si se requiere alimentar información a la API se aplica un POST con la información a subir. Para manejar el estatus de la API se puede obtener el código de estatus con `.status_code` o incluso utilizar como una excepción en caso de errores con `raise_for_status`.

**4. ¿Qué es la autenticación de API y por qué es importante?**

El proceso de autenticación usado por una API, es el proceso por el cual la API confirma que un usuario/entidad que esta interactuando con esta es quien dice que es. Este proceso involucra métodos como contraseñas y usuarios, tokens y llaves de autenticación. La autenticación es un proceso de suma importancia pues es necesaria para realizar el proceso de autorización en las funcionalidades de la API. Si un usuario no es autentificado no se le dan los permisos a las funciones de la API, o incluso se podría dar permisos peligrosos a usuarios que no los deberían tener. [6]

**5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?**

* GET: Pide y recibe información de la API al computador.
* POST: Otorga/sube información del computador a la API.
* PUT: Similar a post, pero es idempotente por lo que se puede hacer PUT varias veces sin problemas. [7]
* DELETE: Elimina un recurso (como los son archivos) especifico del servidor. [8]

# Referencias

[1] https://www.codecademy.com/learn/machine-learning/modules/dspath-clustering/cheatsheet

[2] https://docs.python.org/3/tutorial/modules.html#packages

[3] https://docs.python.org/3/reference/import.html#regular-packages

[4] https://aws.amazon.com/what-is/restful-api/

[5] https://aws.amazon.com/compare/the-difference-between-soap-rest/

[6] https://rapidapi.com/blog/api-glossary/api-authentication/

[7] https://www.w3schools.com/tags/ref_httpmethods.asp

[8] https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods/DELETE