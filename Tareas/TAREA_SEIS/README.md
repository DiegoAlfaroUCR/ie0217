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