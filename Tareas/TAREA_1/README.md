# Instrucciones de ejecución
La parte práctica de esta tarea incluye la elaboración de un juego para adivinar un número al azar (escrito en C++) y un Makefile que permita ejecutarlo. El código fuente se encuentra en la carpeta [src](/Tareas/TAREA_1/src/) mientras que el archivo [Makefile](/Tareas/TAREA_1/Makefile) se encuentra en esta carpeta. Para iniciar el programa se debe primero compilar y correr, para esto basta con correr el comando `Make all` en el directorio presente (ie0217\Tareas\TAREA_1).

Windows (depende de su configuración de mingw):
```
mingw32-make all
```

Linux:
```
make all
```
En caso de solo requerir la construcción del ejecutable (adivina.exe en el caso de Windows) se puede correr `make build`. Alternativamente, para solo iniciar el programa ya compilado puede usar el comando `make run`.

Windows:
```
mingw32-make build      \\      mingw32-make run
```

Linux:
```
make build              \\      make run
```

Finalmente, para limpiar el directorio de archivos generados, ingrese el comando `make clean`

Windows:
```
mingw32-make clean
```

Linux:
```
make clean
```

# Instrucciones de juego.

Al inicar el juego el sistema imprime opciones en la terminal, en la cual debe ingresar números enteros según corresponda. El objetivo es ingresar números en la terminal para adivinar un número aleatorio. Se presentan dos opciones de dificultad, la primera muestra si el número a adivinar es mayor o menor al adivinado; la segunda si el número adivinado está congelado, frío, caliente o hirviendo comparado al número a adivinar. Finalmente, se le pide ingresar el intervalo de números donde se puede generar el número (con límites inclusive). Una vez se adivina el número el programa se finaliza, en caso de gastar los intentos disponibles perderá y se reinicia el programa.


# Parte Teórica C++

**1. ¿Cuál es la principal diferencia entre C y C++?**

La diferencia principal entre ambos lenguajes es que C++ emplea muchas de las características de C, pero permite la programación orientada a objetos. Mientras que C se origina como su propio lenguaje de programación, C++ nace como una extensión de C para facilitar la programación orientada a objetos.

**2. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado
y uno interpretado? 
Proporcione ejemplos de situaciones en las que sería óptimo utilizar un lenguaje
compilado y otras en las que sería más adecuado un lenguaje interpretado**

Un lenguaje compilado es aquel el cual pasa a través de un proceso de compilación donde un compilador convierte el código escrito en texto en instrucciones en ensamblador y posteriormente en código binario. Esto permite que la computadora lea y ejecute dicho código binario. En cambio, un lenguaje interpretado no se puede compilar y depende de un intérprete que ejecute las instrucciones en tiempo real. Para aplicaciones comerciales como videojuegos es óptimo el uso de lenguajes compilados debido a que estos son capaces de correr en cualquier máquina de estructura similar a la cual se programó, en cambio uno interpretado requiere el intérprete y la interpretación en tiempo real del código (más lento). Por otro lado, el análisis de datos es más fácil en un lenguaje interpretado como Python por su facilidad de uso y menor necesidad de crear un ejecutable.

**3. Explique qué es un linker en el contexto de un lenguaje de programación compilado.
¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**

Un linker cumple uno de los pasos en el proceso de compilación, donde se toma un archivo de tipo objeto y se convierte en un archivo ejecutable (.exe). Para el proceso usual de programación el linker une uno o varios archivos de tipo objeto generados durante el proceso y les asigna las distintas partes de memoria junto a los módulos/librerías externas usadas por el código en un mismo ejecutable. Esto es esencial debido a que unifica todas las instrucciones del programa en un mismo archivo, asegurándose de incluir funciones de librerías externas necesarias.

**4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.**

Los tipos de datos derivados (funciones, arrays, punteros, etc.) son aquellos que son construidos a partir de datos de tipo primarios (enteros, floats, caracteres, etc). Los datos primarios se pueden describir como valores asignados en memoria, mientras que los datos derivados son más complejos y se pueden usar para manipular/manejar los datos primarios.

**5. Defina qué significa inicializar y declarar una variable.**

Una variable se declara cuando se le indica al compilador de su existencia y su tipo de dato, en el caso de C++ se da por ejemplo al dar la línea “int x;”. En cambio, inicializar una variable es darle su valor inicial, por ejemplo “x = 5;”. Declarar una variable en C++ implica inicializarla, puesto que obtiene el valor 0 por defecto.

**6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

La sobrecarga de funciones en C++ ocurre cuando se crean varias funciones de un mismo nombre, pero que reciben cantidades diferentes de variables o/y tipos distintos de variables. Esto permite que se tenga un mismo nombre para una función y se pueda emplear en distintas situaciones. Por ejemplo, un mismo nombre de función para obtener un valor absoluto se puede aplicar para enteros y floats si se utiliza esta técnica.

**7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

Un puntero es una variable cuyo valor contiene la dirección de memoria de otra variable. Este se define al asignar un puntero (int* a) con la referencia de una variable (a = &x), y se puede utilizar en contextos donde se requiere acceder/modificar el contenido de una variable u obtener su dirección. Los punteros son útiles para acceder a valores dentro de un array retornar varios valores de una misma función. 

**8. ¿Una variable global almacena el valor original de una operación en una función o una
copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar
de locales en ciertos contextos.**

Una variable global no es afectada por operaciones dentro de una función ni operaciones en copias, esto siempre que no se redefina la variable en el entorno global como la copia. Una variable global solo es afectada dentro de las funciones donde se modifique, fuera de las funciones retiene su valor global. Este hecho es útil cuando se debe usar un mismo valor en varias funciones dentro del programa ya que no requiere ser definida como parámetro en ellas.

**9. Investigue y explique tres métodos comunes de la biblioteca string en C++.**

Length: Retorna la longitud de un string dado, lo cual permite operar en strings donde su longitud es un factor importante. Por ejemplo, al programar una función que modifique el final de un string, es útil conocer la posición de los caracteres finales con su longitud.

Operador +=: Permite concatenar dos o más strings de una forma fácil, la cual es la operación más común en el manejo de strings.

Find: Busca instancias de parámetros dados dentro de un string y retorna la posición si lo encuentra. Esto es útil en una función que busque una secuencia específica en un string dado, por ejemplo, si se quiere reemplazar palabras claves dentro de un string. [1]

**10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**

Aparte del formato, la diferencia principal es que el do-while ejecuta el código primero y luego revisa la condición mientras que el while revisa la condición antes de ejecutar el código.

**11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos,
¿se pueden encapsular en miembros privados y públicos dentro de una estructura?
Explique su respuesta.**

Si, se pueden almacenar funciones dentro de structs al igual que las variables. En el caso de los datos, en las estructuras estos son por defecto públicos, pero se pueden modificar a privados si en la estructura del struct se construye bajo la categoría private [2]. Por ejemplo; 

```
struct nombre {
int a; // Publica
private:
    int b; // Privada
}
```

**12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp
en C++. Describa el propósito específico de cada tipo de archivo.**

Es útil hacer la diferenciación para hacer una estructura de código más clara y organizada, si en un proyecto a grande escala se requieren funciones compartidas entre equipos se establecen en archivos diferentes al main y se usan los headers para implementar dichas funciones. El header (.hpp) permite definir las funciones importadas para el funcionamiento de un programa .cpp. El main.cpp es donde se contiene el programa principal, con la función main() que llama a las demás funciones e inicializa el programa. Finalmente, los archivos .cpp separados albergan las funciones que vincula el .hpp al main.cpp.

**13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos
de situaciones en las que se emplea el Type Casting y cómo se realiza.**

El type casting permite modificar el tipo de una variable, asignándole un tipo diferente al original. Es de gran utilidad en situaciones donde el tipo de la variable impide su uso en alguna función. Por ejemplo, cuando el resultado de una operación realizada sobre un entero posee una exactitud en decimales, es útil convertir la variable en un float o incluso aumentar su exactitud a un long float para conservar dicha información. Una forma muy clara de hacer esto es usar el tipo de variable como función, con la variable como argumento. 
```
double var;
int(var);
```

**14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione
ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.**

Goto no es recomendable pues rompe el hilo lógico que sigue un programa normal, generando un caso donde se pasa de una posible secuencia de for o while a otra sección del código enteramente. Es posible evitar el uso de un goto por medio de un uso inteligente de for loops, condicionales como if-whiles-dowhiles y demás estructuras en funciones.

**15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia
entre el almacenamiento de variables locales y globales.**

Toda variable manejada por un programa escrito en C++ se guarda temporalmente en memoria RAM, en distintas secciones designadas por el compilador. Se divide en la sección del texto del código, una sección de constantes, variables globales y estáticas, y el “Heap” y “Stack” de la memoria dinámica [3]. Estas se guardan como conjuntos de bits (de tamaño dependiendo del tipo de variable) con localizaciones definidas iniciando desde la memoria reservada al texto hasta el Stack con direcciones enumeradas crecientemente de forma hexadecimal. La diferencia entre el almacenamiento de variables locales (en el Stack) y las variables globales, es que la memoria del Stack es desalojada una vez se sale de una función, mientras que la de las variables globales persiste hasta que se finalice el programa. Esto significa que las variables locales se pierden cuando se cierra la función que las originó.

**16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

Cuando se pasa un parámetro por valor la función recibe solamente el contenido de la variable, esencialmente se recibe una copia de la información mas no la variable; por ende, no se puede modificar la variable original. Al pasar el parámetro por referencia, lo que se recibe es la localización de la variable original, esto permite acceder a su información y a efectuar cambios permanentes en ella. Finalmente, si se pasa el parámetro como un puntero se tiene la misma información que la referencia contenida en otra variable, lo cual permite las mismas operaciones que con la referencia.

**17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección
apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese
arreglo mediante el puntero.**

Cuando se define un puntero a un arreglo, este por defecto apunta al primer elemento del arreglo. Por ejemplo, si se tiene un arreglo x[6], el puntero (ptr) asignado al arreglo apunta a x[0]. Para poder acceder a los demás datos del arreglo se puede llamar al puntero más un entero representando el índice buscado (ej. ptr + 1 para referenciar el segundo elemento).

**18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos
de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

Los punteros dobles son punteros que referencian la dirección de memoria de otro puntero. Estos son usados cuando es necesario emplear operaciones con punteros sobre una variable de tipo puntero. Un ejemplo de un programa usando un puntero doble es cuando una función recibe un puntero y se debe modificar el puntero que recibe, se puede usar una función que altere el contenido del puntero con el doble puntero que lo referencia. Si el uso del puntero doble solo se podría modificar una copia del puntero, pero no el valor original (similar a lo mencionado en la pregunta 16).

**19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**

Dentro de un bucle, un “break” causa que se interrumpa el bucle al ser ejecutado. Esto significa que se finaliza el hilo lógico que seguía el bucle y se ejecuta el resto del programa sin ejecutar el resto de líneas/iteraciones del bucle. En cambio, un “continue” solo le indica al programa que continue con las siguientes iteraciones al ejecutarse. Si se ejecuta un break se finaliza el bucle, si se ejecuta un continue se continua.

**20. ¿Para qué se utiliza la directiva #ifndef?**

La directiva #ifndef se emplea en archivos de header (.hpp) para indicar un set de instrucciones que ejecutar en el caso de que no se hayan definido las variables indicadas. Por ejemplo, si se usa #ifndef SUM_H en el header file de una función, el compilador solo va a definir la variable si no se ha definido previamente. Esto se utiliza para reducir el espacio usado, evitar redundancias y así hacer el programa más eficiente.

**21. ¿Qué es el puntero this en C++?**

El puntero this, se refiere a un tipo de puntero que se usa para referenciar al objeto que llama a sus funciones pertenecientes a la familia del objeto. Una clase de objetos posee una única copia de funciones que se pueden aplicar sobre ellos, si se quiere aplicar una de estas funciones sobre el objeto que la llama se puede utilizar el puntero this como referencia a sí mismo [4]. Por ejemplo, un objeto con una función para comparar objetos de su mismo tipo. Dentro de esta función se usa el puntero this para referenciar los datos del objeto que la llama y así se compara con los de otros.

**22. ¿Qué es un puntero nullptr?**

El puntero nullptr es un puntero que referencia a un valor nulo, es un puntero ya definido y no puede ser reasignado pues es constante. Es útil en casos donde NULL genera problemas como al usar funciones sobrecargadas con enteros y punteros, en cuyo caso usar NULL causaría que el compilador use la función para enteros y no la de punteros. [5]

**23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?**

Un arreglo está definido por un espacio de memoria contigua definido al momento de la creación del arreglo, esta no se puede cambiar por lo que un arreglo se mantiene del mismo tamaño y solo divide su memoria en cada elemento. En cambio, una lista es un conjunto de elementos, unidos por medio de referencias, que se encuentran en distintos lugares de memoria. Esto causa diferencias en como se modifican, iteran y utilizan. [6]

**24. ¿Qué es una función prototipo?**

Una función prototipo es cuando se declara una función previo a su definición en el código. Esto se da en un header, lo cual permite llamar a la función en líneas anteriores a su definición sin problema. Al declarar el tipo de variable que retorna la función al igual que el de sus parámetros, el compilador es capaz de discernir si su uso es correcto aún sin tener su contenido haciendo esta estructura válida. Esto se utiliza para tener una organización más clara en los programas.

**25. ¿Investigue qué es un memory leak?**

Un memory leak o fuga de memoria es un fenómeno donde un programa no libera la memoria que utiliza en sus funciones al finalizar, lo cual causa que la memoria se desperdicie. Esto tiene consecuencias variables, desde ser algo despreciable hasta causar el colapso completo del sistema en donde opera. Esto ocurre cuando la memoria alocada por un programa nunca se libera por ejemplo debido a que la estructura de condicionales no lleva a su liberación o que nunca se establece un punto donde se libera la memoria. [7]

# Parte teórica Makefile

**1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**

La variables son usadas para definir partes de las instrucciones del makefile de una manera organizada. La variable CC contiene la referencia al compilador a usar cuando se emplean makefiles a programas escritos en C. También para el caso de programas escritos en C se emplea la variable CFLAGS se usa para establecer “flags” u opciones de compilación a usar (por ejemplo -Wall para mostrar todas las alertas). Por otra parte, si se genera un makefile para programas escritos en C++ las “flags” u opciones de compilación se definen en la variable CXXFLAGS [8]. Finalmente, la variable LDFLAGS sirve para incluir más opciones que el linker asociado al proceso del compilador emplee, un ejemplo de esto es la opción -L para que el linker busque librerías en la carpeta de compilación.

**2. ¿De qué se compone una regla en un Makefile?**

Una regla se compone de un target, las dependencias del target y los comandos necesarios para construir el target. Se construyen de la siguiente manera:
```
target: dependencia1 dependencia2 dependencia3
	comandos 
```

**3. Defina qué es un target y cómo se relaciona con sus prerequisitos.**

Un target es el resultado de los comandos realizados por un Makefile. Un ejemplo de esto es un archivo .exe creado a partir de las instrucciones de un makefile. Los targets poseen dependencias que son necesarias para cumplir las instrucciones y llegar al target, si estas son alteradas el makefile toma la tarea de actualizar el target por medio de los comandos.

**4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?**

La bandera -I permite incluir un directorio de header files a la hora de compilar el programa, es necesaria si se compila un script que incluye funciones de un archivo header en un directorio específico [9]. La bandera -c le indica al compilador que debe compilar el archivo dado, pero no debe ejecutar el proceso del linker, así se obtiene un object file sin conectarlo con las librerías [10]. Finalmente, la bandera/opción -o indica que la salida de un proceso de compilado se guarde en el archivo posterior a la bandera (ej. -o main.exe).

**5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**

Las variables en un Makefile se definen de forma similar a otros lenguajes de programación como python o C++ (ej. CXX = g++). Se utilizan para definir las partes de las instrucciones que construyen los targets en un Makefile, y son de gran utilidad para mantener la estructura del Makefile ordenada, ya sea para la lectura o para la modificación de este.

**6. ¿Qué utilidad tiene un @ en un Makefile?**

El símbolo @ se emplea para referenciar el target dentro de una instrucción del mismo. Por ejemplo, en este script se debe incluir el nombre de un target genérico y se emplea el @:

```
%.exe: %.cpp 
    $(CXX) $(CXXFLAGS) -c $< -o $@
```

**7. ¿Para qué se utiliza .PHONY en un Makefile?** 

La palabra clave .PHONY se utiliza para indicar que un target dado no es un archivo por crear/actualizar, sino una acción. Esto es importante para evitar confusión para el makefile y para que el makefile no tome el .PHONY como algo que no requiere ser actualizado y por ende no lo ejecute.

*Links a sitios consultados:*

[1] https://cplusplus.com/reference/string/string/

[2] https://en.wikibooks.org/wiki/C%2B%2B_Programming/Structures

[3] https://faculty.cs.niu.edu/~mcmahon/CS241/Notes/storage_class.html

[4] https://www.geeksforgeeks.org/this-pointer-in-c/

[5] https://www.geeksforgeeks.org/understanding-nullptr-c/

[6] https://cplusplus.com/reference/list/list/

[7] https://owasp.org/www-community/vulnerabilities/Memory_leak#:~:text=A%20memory%20leak%20is%20an,depend%20on%20the%20application%20itself. 

[8] https://earthly.dev/blog/make-flags/#:~:text=c%20main.c-,LDFLAGS,%2C%20using%20the%20%2DL%20option.

[9] https://www.rapidtables.com/code/linux/gcc/gcc-i.html

[10] https://linux.die.net/man/1/gcc