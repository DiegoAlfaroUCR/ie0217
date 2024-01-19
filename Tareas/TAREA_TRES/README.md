# Parte Teórica

## Templates:

**1. Definición de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple.**

Los templates son herramientas con las que se escriben funciones y clases usando tipos de datos indefinidos/genéricos, esto permite que dichas funciones/clases trabajen con distintos tipos de datos sin tener que escribir código diferente para cada uno. Un ejemplo de usos de templates se da al crear una función para obtener el producto de un set de ints, floats, doubles, etc. Esta función se escribiría de la misma manera en cada caso, por lo que es conveniente usar un template.

```
template<typename T>
T producto(T a, T b, T c, …){
return (a * b * c + …);
}
```

**2. Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?**

La sobrecarga de funciones con plantillas es posible, y se explica según la jerarquía de prioridad que da el compilador a funciones de templates y funciones fuera de templates. Por ejemplo, si se intenta realizar sobrecarga entre una función con template, y otra sin template, el compilador prioriza la función sin template en el caso donde aplica. Si los argumentos dados se acercan más a lo esperado de la función sin template se usa esta, en el caso contrario se usa la función del template [1]. Luego, entre funciones definidas en templates se da prioridad a aquellas que tengan tipos de datos ya definidos similares a los dados al llamar la función. 

**3. Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C++.**

Los templates también tiene diversos usos en la definición de clases, principalmente al programar clases que pueden manejar varios tipos de datos. Los templates permiten crear clases que reciben diferentes tipos de datos en los argumentos de sus constructores, esto es útil en aplicaciones donde la clase requiere flexibilidad en su uso. También permiten el uso de atributos/métodos con variables indefinidas que puedan operar los distintos tipos de dato proveídos. Al usar ambos en conjunto, se pueden desarrollar objetos con los mismos métodos pero de distinto tipo de variable. Un ejemplo de esta aplicación sería en un programa para una calculadora con OOP que debe recibir enteros, flotantes, doubles e incluso podría recibir números complejos, por lo que es conveniente crear las clases de dicho programa con varios tipos de datos en mente.

## Excepciones:

**4. Manejo de Excepciones: Describa los bloques try catch y throw y cómo se utilizan para el manejo de excepciones en C++.**

En C++ un bloque try indica una sección de código donde el programa debe intentar una serie de instrucciones que podrían fallar/causar error, dentro de estos bloque es prudente incluir comandos throw. Los comandos throw se usan cuando ocurre un error y “lanzan” un tipo de error o mensaje de error al ser ejecutados, estos son accedidos por los comandos catch. Los comandos catch le indican al compilador que debe realizar una acción (usualmente imprimir un error) cuando se “lanza” un error dentro de un bloque try. En conjunto estas herramientas permiten manejar errores que puedan darse dentro de un programa y generar un mensaje de error descriptivo para el usuario, al igual que evitar el colapso total del programa.

**5. Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles.**

La librería estándar <stdexcept> proporciona varios tipos de excepciones útiles, entre estas;
* invalid_argument: Esta excepción se usa en casos donde el argumento proporcionado no es válido para la situación en la que se usa. Por ejemplo, si se pide de argumento un string de números y se recibe un string de letras.

* out_of_range: Esta excepción sirve para indicar que el programa se ha salido de un rango permitido. Por ejemplo, si el usuario proporciona un índice donde buscar un elemento, pero el contenedor de dichos elementos no es lo suficientemente grande para llegar a ese índice.

* length_error: Esta excepción indica que el largo de una variable dada excede un límite establecido. Esta se usa en objetos como strings (cuando el usuario da un string más grande de lo que se espera en el programa) o incluso en vectores (a la hora de reservar espacio mayor al permitido por el sistema) [2].

**6. Política de Manejo de Excepciones: ¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software?**

Una política de manejo de excepciones es un estándar crucial a mantener durante el proceso de diseño de software, esta se trata de hacer un esfuerzo considerable y profundo por asegurar todos los posibles errores del programa bajo excepciones. Al usar excepciones en los programas se evitan colapsos totales en los sistemas, se hace más fácil el proceso de debugging y corrección de errores. Si no se hace manejo de errores el programa se vuelve inseguro e inestable. Las políticas de manejo de excepciones se consideran “best practice” en la industria. [3] 

**7. Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.**

La palabra clave noexcept le indica al compilador que una función no va a “lanzar” excepciones, y en el caso de que se lance una excepción en esta, se ejecuta std::terminate que finaliza el programa. Esta tiene el propósito de modificar ciertos comportamientos en el programa, por ejemplo, si una función con noexcept llama a otra función que genera una excepción el programa se termina. Además, se puede verificar dentro del código si una función está definida como noexcept (ya que se puede usar como función que retorna un booleano sobre su estado). Otros usos son en la optimización de la compilación, por ejemplo, al realizar modificaciones en los elementos de un vector bajo noexcept el compilador escoge mover los elementos ya que no espera ningún error en la generación de estos. En cambio, si se hace lo mismo sin el noexcept, el compilador anticipa posibles errores y los copia durante el proceso en vez de moverlos directamente [4]. Para definir una función como noexcept: ` void función() noexcept {}`.

## STL (Standard Template Library):

**8. Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.**

* Stacks: Operaciones donde se requiere acceder a los elementos en orden de más recientemente agregados a primeramente agregados.  

* Vectores: Operaciones que involucran conjuntos de elementos que se deben acceder, mover, eliminar o editar independientemente de su posición en el vector.

* Sets: Operaciones con conjuntos de elementos que se deben mantener ordenados.

* Queues: Operaciones donde los elementos más recientemente agregados al contenedor deben ser accedidos después que los primeramente agregados. 

* Maps: Operaciones donde se debe relacionar un valor con una llave única que permite buscar dicho valor.

**9. Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.**

Los iteradores incluidos en la STL son similares a los iteradores comúnmente usados en arreglos (por ejemplo, un iterador de tipo entero en un for loop), ya que permiten acceder a los elementos de los contenedores y se puede ir aumentando uno progresivamente para acceder en cada elemento progresivamente. Estos son similares a punteros que referencian un elemento en el contenedor, por ende, un iterador no es un elemento en sí, sino su ubicación. Se pueden utilizar en for loops y whiles para iterar sobre cada elemento. En el caso de los vectores se puede iniciar el iterador en el primer elemento con `vector.begin()` y se finaliza antes de llegar a la posición posterior al último elemento con `vector.end()`. 

**10. Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.**

Algunos algoritmos proporcionados por la STL son;

* sort: Este algoritmo permite ordenar los elementos en un contenedor en orden ascendiente. Recibe de parámetros el intervalo en el cual se debe ordenar el contenedor (inicio y final), y puede recibir una expresión de comparación que remplaza el operador normal “<”. [5]

* find: Este algoritmo busca entre los elementos de un contenedor y retorna la ubicación del elemento que cumple una condición (si existe). Recibe parámetros que indican el inicio y final del intervalo a buscar, el valor al cual se comparan los elementos y demás parámetros opcionales. [6]

* equal: Este algoritmo compara dos intervalos de contenedores y retorna si son iguales. Recibe de parámetros los inicios y finales de ambos intervalos y puede recibir otros parámetros opcionales que alteran su política de ejecución. [7] 

**11. Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?**

Se pueden crear algoritmos personalizados con la ayuda de funciones de algoritmos de la STL, por ejemplo, si se quiere eliminar un elemento de un vector se puede emplear el algoritmo find() para encontrar el elemento sin hacer las iteraciones a mano. El uso de los algoritmos de la STL es recomendado sobre el uso de algoritmos propios pues aquellos en la STL están más optimizados y estandarizados que los propios. Esto genera mejor rendimiento y asegura que otros programadores comprendan el código usado.

## Expresiones Regulares:

**12. Definición de Expresiones Regulares: Defina qué son las expresiones regulares y proporcione un ejemplo simple.**

Las expresiones regulares son formas de generalizar secuencias de caracteres con patrones específicos, estas se usan en conjunto con herramientas como regex para automatizar el manejo de secuencias de caracteres. Por ejemplo, se pueden usar para verificar si una contraseña dada es válida para una página web. Un ejemplo simple de estas expresiones para encontrar caracteres ‘x’ repetidos: `x+`. 

**13. Caracteres Especiales: Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.**

* ‘.’: El punto indica que aplica cualquier carácter excepto el salto de línea, así una expresión `Diego.` admite todo conjunto que posea ‘Diego’ seguido por un carácter; Diegox, DiegoD, etc.

* ‘^’: El ‘elevado a’ dentro de corchetes indica que se niega/rechaza el conjunto de caracteres dado. Por ejemplo, se rechaza el carácter ‘c’ con la expresión `[^c]`.

* ‘|’: El ‘|’ indica que se permite una u otra opción dada. Por ejemplo, si se tiene la expresión `carro|moto` se coincide todo conjunto que posea la secuencia ‘carro’ o ‘moto’.

**14. Uso de Expresiones Regulares en C++: ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.**

Las expresiones regulares se pueden usar en C++ a través del uso de la librería regex, esta permite definir expresiones regulares con la clase basic_regex o permite encontrar patrones en strings comunes [8]. Un ejemplo de su para encontrar patrones en strings es definiendo un string de patrón como ‘com’ y buscándolo en un conjunto de elementos con `elemento.find(‘com’)`.

**15. Validación de Patrones: ¿Por qué las expresiones regulares son útiles para la validación de patrones en cadenas de texto?**

Las expresiones regulares son de gran utilidad debido a la forma en la que pueden especificar los patrones a buscar de una forma compacta y estandarizada, al contrario de otros métodos que requieren funciones extensas y cuadros de for loops e if-else. Para filtrar strings variables e inesperados, las expresiones regulares son una herramienta fácil de usar y segura, mientras que otros métodos deben ser muy robustos para poder obtener los mismos resultados y son propensos a errores con combinaciones extrañas de strings. 

[1] https://www.ibm.com/docs/en/i/7.5?topic=only-overloading-function-templates-c

[2] https://en.cppreference.com/w/cpp/error/length_error

[3] https://www.techtarget.com/searchsecurity/feature/Exception-handling-best-practices-call-for-secure-code-design

[4] https://en.cppreference.com/w/cpp/language/noexcept_spec

[5] https://en.cppreference.com/w/cpp/algorithm/sort

[6] https://en.cppreference.com/w/cpp/algorithm/find

[7] https://en.cppreference.com/w/cpp/algorithm/equal

[8] https://cplusplus.com/reference/regex/
