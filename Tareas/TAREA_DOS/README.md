# Instrucciones de ejecución

# Parte Teórica

**1. Conceptos Fundamentales: Define que es la programación orientada a objetos y explica sus principios fundamentales.**

La programación orientada a objetos se enfoca en una forma de estructurar/crear código en donde se crean tipos de objetos con características y métodos en vez del uso estricto de funciones y variables. La diferencia entre este estilo de programación y programación en general es que centra alrededor de los objetos creados y la forma en la que estos interactúan. Los principios fundamentales de la programación orientada a objetos es el uso de clases (modelos que definen los atributos y métodos que puede tener un objeto de dicha clase), objetos (instancias de una clase), atributos (características de una clase/objeto en forma de variables) y métodos (funciones que pueden emplear objetos de una clase). Otros conceptos importantes son la herencia, polimorfismo, abstracción, etc.

**2. Herencia: Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.**

Herencia en programación orientada a objetos hace referencia a la capacidad de una clase “hija” para utilizar atributos/métodos de una clase “madre”. Esto permite que se reutilicen definiciones, se establezcan jerarquías de clases y demás relaciones según la similitud entre dos o más clases. Un ejemplo del uso de herencia es cuando se emplean clases madres con características generales (por ejemplo una clase Animales) para clases hijas con características únicas a cada instancia (siguiendo el ejemplo, clases hijas con especies de animales), así solo se definen las características específicas en las clases hijas pero se reutilizan las de la clase madre. 

**3. Encapsulamiento: ¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++.**

Encapsulamiento en programación orientada a objetos hace referencia al hecho que los atributos/métodos de una clase pueden ser definidos como públicos o privados, y aquellos que son privados no pueden ser accedidos por clases hijas o por el resto del programa. Esto es importante debido a que mejora la seguridad del programa, ya que se puede esconder información sensible, y reduce la posibilidad de error, ya que no permite que partes externas del programa interactúen con información que no deben modificar. En C++ se ve implementado al declarar variables/métodos bajo “private:”, si se intenta emplear alguna información definida bajo esta bandera en un objeto de diferente clase el compilador expresa un error.

**4. Polimorfismo: Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.**

El polimorfismo en programación se refiere a la capacidad de una función/método de tener varias formas dependiendo de cómo es llamada en el código. Existen dos tipos de polimorfismo, por un lado, existe el polimorfismo estático el cual hace referencia a la sobrecarga de funciones donde un mismo nombre de función tiene formas distintas según los parámetros dados a la función. Por otro lado, se encuentra el polimorfismo dinámico donde se define un método en una clase madre y se vuelve a definir de manera distinta en una clase hija, al llamar la función desde un objeto de la clase hija se ejecuta la función redefinida, no la original. Esto permite que varios objetos de clases relacionadas tengan funciones similares (pero distintas) con un mismo nombre [1]. Este polimorfismo se puede dar incluso en el uso de operadores, por ejemplo, una clase vector emplea el operador suma bajo una función distinta a la que daría una clase matriz pese a ser hijas de una clase de objetos matemáticos.

**5. Abstracción: ¿Cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.**

La abstracción que conlleva la implementación de clases y por ende objetos, permite cambiar/actualizar las funcionalidades de todos los objetos de una clase sin tener que reescribir todo el código en el que se instancian estos objetos, solo se debe editar la clase. Esto permite tener código que con el paso del tiempo se puede mantener a través de cambios y actualizaciones fácilmente. Por ejemplo, en casos donde se tiene un programa de gran tamaño y se debe corregir un error de programación en algún algoritmo, es mucho más simple corregir el error en una clase que guarda el algoritmo por los objetos, que ir por cada instancia de una función/variable que emplee el mismo tipo de algoritmo.

**6. Clases y Objetos: Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.**

Una clase es el molde que define a todo objeto que es parte de ella misma. En las clases se definen los atributos y métodos que puede tener un objeto, mientras que este le da un valor a dichos atributos (solo para sí mismo) y emplea los métodos. Por ejemplo, se tiene una clase Libro que define el atributo Nombre y el método abrir, y el objeto miLibro cuyo atributo Nombre es definido como “Luna de Plutón” y llama al método abrir sobre sí mismo durante el programa.

**7. Métodos Virtuales: Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.**

Un método virtual en C++ se define dentro de una clase al usar la palabra clave virtual en su declaración, e indica que en alguna clase derivada se va a sobrescribir el método por lo cual el compilador debe invalidar el uso de la función virtual y usar la versión derivada. El uso es de gran importancia en casos donde el método se llama a través de un puntero de tipo clase base pero se quiere usar la versión de la clase derivada, entonces se agrega la bandera virtual para que el compilador haga el cambio. Esta es una forma de asegurar el polimorfismo de los métodos aún cuando se usan punteros de tipo base clase. Además, al ser opcional, es una opción más de versatilidad en el uso de métodos que emplean polimorfismo. 

**8. Constructores y Destructores: ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.**

Los constructores y destructores son métodos especiales y únicos de las clases, los cuales no retornan variables ni son llamadas como tal, sino que se ejecutan automáticamente al crear y destruir el objeto respectivamente. En el caso del constructor, es un método que se llama en el momento que se crea un objeto de la clase, usualmente se utiliza para definir atributos por medio de parámetros. En el caso del destructor, se llama al momento en el que el objeto está a punto de ser borrado, usualmente liberan la memoria ocupada por el objeto. Por ejemplo, un constructor para una clase Libro recibe el nombre del libro como parámetro mientras que su destructor solo imprime una notificación de borrado y libera su memoria.

**9. Sobrecarga de Operadores: Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.**

La sobrecarga de operadores es fundamentalmente el mismo concepto que la sobrecarga de funciones, solo que está dado por medio de operadores como “+” o “*”. Se puede definir como métodos en una clase, y sirve para permitir el uso de operadores en distinto objetos o tipos de variables. Por ejemplo, si se tiene una clase Matriz, se puede sobrecargar el operador multiplicación “*” para tener dos funciones separadas en el caso de multiplicación con un escalar (multiplica elemento por elemento) a con otra matriz (multiplicación matricial). 

**10. Templates: Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?**

Los templates en C++ permiten escribir funciones/clases que reciben y funcionan con datos de diferentes tipos sin tener que reescribirlas para cada tipo de dato a usar. Estos se diferencian de la sobrecarga pues en la sobrecarga de funciones se debe escribir una función diferente para cada caso, con templates una misma función sirve para cada caso. Son útiles cuando un código generado es aplicable con diversos tipos de datos y no se requiere cambiar. Por ejemplo, una función que retorna el promedio de un conjunto de datos, se puede emplear con datos enteros, floats y doubles, donde la implementación es la misma. En este caso es más eficiente usar un template que reescribir la función con los parámetros cambiados.

**11. ¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?**

La memoria dinámica es un espacio en la memoria usada por el programa que guarda variables dentro de funciones, variables asignadas con calloc, malloc, etc. Esta sección se encuentra dividida en el “Stack” y el “Heap” y es distinta del espacio de memoria que guarda el código. Se utiliza comúnmente en estructuras como vectores, arrays y demás que el programador asigna dentro de esta para su uso en un programa. Un caso común donde se requiere memoria dinámica es cuando se quiere usar una estructura de dato sin un límite de memoria preestablecido, por lo cual se debe seguir asignando memoria durante la ejecución del programa.

**12. Explique la diferencia entre new y malloc en C++. ¿Cuándo debería utilizar uno sobre el otro?**

Existen varias diferencias entre new y malloc, pese a que superficialmente ambas hacen lo mismo, asignar memoria dinámica para una variable. Mientras que malloc es una función, new es un operador, por ende, no es llamado como función. Al usar new en una clase este llama al constructor y al destructor al usar su equivalente para librar memoria “delete”, en cambio malloc y free no lo hacen [2]. New no posee una función para alterar el tamaño de memoria ya asignada, mientras que malloc sí por medio de realloc, lo cual permite más funcionalidad. Finalmente, new presenta excepciones en caso de error, mientras que malloc retorna un NULL que puede causar problemas [3]. En casos donde no se requiera realloc, es más recomendable usar new pues es más seguro y compatible con clases, en caso contrario se debe usar malloc.

**13. ¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++?**

Una fuga de memoria es cuando un programa asigna memoria dinámica sin liberarla, lo cual causa que esa memoria se vuelva ocupada hasta que se finalice el programa. Este fenómeno puede volver al computador lento, causar el fallo del programa o incluso colapsar el computador. Se puede evitar si se tiene un libera rigurosamente toda la memoria asignada dentro del código. 

**14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.**

Los punteros inteligentes son implementaciones de punteros que permiten la liberación automática de memoria asignada a los punteros, por ende, no se debe liberar los elementos guardados en el puntero ya que el puntero los libera al salir de su scope [7]. Por ejemplo, si se asigna un valor en la memoria dinámica dentro de una función, y se asigna a un Smart pointer, no es necesario liberar el valor dentro de la función, ya que al finalizar la función el Smart pointer la libera por sí mismo. Se puede generar una clase Smart Pointer que contiene el puntero a la variable y un destructor que se encarga de liberar la variable del puntero, así generando el puntero inteligente.

**15. ¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno?**

Delete permite liberar la memoria dinámica asignada previamente por un operador new en el código. La diferencia entre delete y delete[] es que el paréntesis cuadrado indica que la variable por liberar es un array. Por esto se debe utilizar delete[] cuando se asigna memoria de un array o estructura similar, y delete cuando se trata de una sola variable.

**16. ¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?**

Un algoritmo de ordenamiento es una forma de resolver un problema (específicamente de ordenar un conjunto de elementos) que busca ser mas eficiente que otros métodos. Son de gran importancia debido a su complejidad, ya que si es posible reducir el tiempo de procesamiento y uso de memoria en un programa complejo, por medio de algoritmos, se logra optimizar en gran manera su rendimiento. En programas de gran tamaño los algoritmos son vitales.

**17. Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cuál es su complejidad temporal en el peor caso?**

El bubble sort se basa en recorrer un conjunto de datos varias veces y cada vez comparar elementos adyacentes, cambiándolos entre sí si es necesario. Esto se repite hasta la iteración donde no se haga ningún cambio durante las comparaciones. En el peor caso posee una complejidad temporal de O(n^2).

**18. Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento?**

El algoritmo de ordenamiento QuickSort se basa en separar y organizar un conjunto de datos alrededor de un “pivot”, poniendo los datos menores al pivot a su izquierda y los mayores a su derecha. Recursivamente se repite este proceso en las secciones divididas del pivot hasta que ya no haya más divisiones ni cambios por hacer. Tiene la ventaja de que en promedio posee una complejidad muy buena O(n log n).

**19. ¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.**

Un algoritmo de ordenamiento estable es aquel que en caso donde se den dos o más elementos con identificadores diferentes, pero valores iguales, mantiene el orden relativo entre estos según se dio al inicio [4]. Por ejemplo, si se da un conjunto de notas de estudiantes y hay dos estudiantes (Alejandro y Diego) con la misma nota, un algoritmo estable ordenaría primero la nota de Alejandro y luego la de Diego, mientras que uno inestable podría dar la nota de Diego primero. En un caso como este se podría beneficiar de un ordenamiento estable en el caso de que el orden de los identificadores (“Diego” y “Alejandro”) sea importante, por ejemplo si se ocupa orden alfabético.

**20. Hable sobre el algoritmo de ordenamiento ”Merge Sort”. ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?**

El algoritmo de ordenamiento “Merge Sort” consiste en dividir el conjunto de datos dados en subconjuntos continuamente de solo un elemento, luego se comparan los subconjuntos adyacentes y se unen en un mismo subconjunto, se repite este proceso entre los subconjuntos hasta unir todos los elementos de nuevo (comparándolos entre sí en cada unión o “merge”) y se obtiene el conjunto ordenado [5]. Este tipo de algoritmo es de los más rápidos, puesto que posee una complejidad temporal en el mejor y peor caso de O(n log n). Su uso es preferible en casos donde se debe ordenar conjuntos muy grandes de datos o incluso al ordenar datos externos que son muy grandes para guardar en la memoria del programa [6].

[1] https://stackify.com/oop-concept-polymorphism/

[2] https://www.geeksforgeeks.org/new-vs-malloc-and-free-vs-delete-in-c/

[3] https://www.geeksforgeeks.org/malloc-vs-new/

[4] https://www.baeldung.com/cs/stable-sorting-algorithms

[5] https://www.digitalocean.com/community/tutorials/merge-sort-algorithm-java-c-python

[6] https://www.geeksforgeeks.org/merge-sort/

[7] https://www.geeksforgeeks.org/smart-pointers-cpp/
