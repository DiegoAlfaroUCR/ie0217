# Parte Teórica

**1. Explique la diferencia entre una lista y una tupla en Python.**

En Pyton una lista contiene varios elementos mutables de tipos similares, por ejemplo una lista de strings. Mientras que una tupla posee elementos de distinto tipo y dichos elementos no son mutables, como lo son tuplas de enteros, strings y demás. Por ende, la listas se usan para conjuntos de datos similares que se deben modificar, mientras que las tuplas se usan con elementos de datos distintos que no se pueden modificar. Al ser inmutables las tuplas pueden ser usadas como claves para un diccionario y son más rápidas en la búsqueda de sus elementos.

**2. ¿Qué es la sobrecarga de operadores en Python y cómo se implementa?**

La sobrecarga de operadores en Python es una técnica que permite definir el comportamiento que se debe dar cuando se emplean operadores como '+', '*' o la conversión entre tipos para un objeto. Esta se implementa en la definición de métodos de una clase, al usar nombres especiales como "\__add__" o "\__str__" que le indican al interprete que funciones llamar al dar instancias de objeto clase + objeto clase, y print(objeto clase) respectivamente. Estos permiten simplificar el uso de estos objetos en otras partes del código.

**3. Explique el concepto de "alcanzabilidad”(scope) de una variable en Python.**

El scope de una variable se refiere a los ámbitos (local, global) donde una variable está disponible y se puede modificar. En Python las variables se pueden encontrar en un ámbito local dentro de funciones/métodos, puede ser una variable global accesible a todo objeto o incluso una variable privada en una clase. El scope de una variable depende del lugar donde se define, si se define dentro de una función es local (si no se usa operadores como Global) y si se define fuera de una función/clase es global. También se pueden crear variables privadas en clases que solo son accesibles a otras clases del mismo tipo.

**4. ¿Qué es un decorador en Python y cuál es su función principal?**

Los decoradores son herramientas en Python que permiten alterar el comportamiento de funciones al ser llamads (también métodos y clases) sin tener que reescribirlas o emplear sobrecarga de funciones. Los decoradores permiten "envolver" o incluir una función dentro de otra, es similar al comportamiento generado al pasar una función como argumento de otra y llamarla en esta. Los decoradores permiten escribir un código general como una función decoradora y emplear una función previamente desconocida dentro de esta, luego se emplea la bandera `@` con el nombre de la decoradora en la declaración de una función. Al llamar a esta última función no solo se llama la función sino que también se aplica el comportamiento de la funcion decoradora. Escencialmente al llamar una función a la que se le aplicó un decorador no solo se llama la función, sino al decorador con la función como argumento. [1]

**5. ¿Cómo se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally.**

Las excepciones en python se manejan por medio de bloques try-except-finally, donde la implementación de cada uno influencia el otro. El bloque try permite correr un conjunto de líneas de código que es propenso a generar un error, en el caso de que estas líneas generen un error el try evita que el programa colapse (en ciertos casos) y en cambio redirige el programa al bloque except. El bloque except permite llamar líneas de código dependiendo del error generado en el bloque try, estas líneas permiten que el programador personalise como debe responder el programa a errores esperados. En el bloque except se puede elegir la respuesta según el tipo de error que devuelva el bloque try. Además, se tiene el bloque try que contiene código que se va a llamar sin importar lo que ocurra en los bloques try/except. Un ejemplo de la aplicación de estos bloques es;
```
# Try
try:
    a = float(input())
    b = 1/a
    print(b)

# Error cuando se da un string.
except ValueError:
    print("Input dado no se pudo convertir a float.")

# Error cuando se da un 0.
except ZeroDivisionError:
    print("Se intentó dividir entre 0.")

finally:
    print("Esto siempre se corre.")
```

**6. ¿Qué son los generadores en Python y para qué se utilizan?**

Los generadores son expresiones en Python que retornan iteradores o se comportan como iteradores [2]. Estos funcionan a partir de herramientas como yield dentro de funciones o con la sintaxis (expression for item in iterable), la cual es similar a la sintaxis de listas [3]. Los generadores se emplean en situaciones donde se debe dar un comportamiento similar a un iterador o un for de forma más compacta, eficiente y legible. Un ejemplo propio del uso de generadores para obtener el factorial de un número:

```
# Se usan generadores para devolver una lista de valores desde num hasta 1.
def descender(num):
    while num > 0:
        yield num
        num -= 1

# Función para retornar producto de una lista de números.
def multiplicar(lista):
    factorial = 1
    for x in lista:
        factorial = factorial * x
    return factorial

print("Factorial de 5:", multiplicar(descender(5)))
```

**7. Explique la diferencia entre init y call en clases de Python.**

Mientras que ambos son métodos que se pueden llamar al generar un objeto de una clase, ambos reciben atributos y ambos pueden modificar el objeto, init se considera el constructor de un objeto mientras que call define la funcionalidad de llamar a un objeto como si este fuese una función. Mientras que el método init se llama cuando se crea un nuevo objeto de la clase, el método call se llama cuando un objeto de esta clase se llama como una función [4]. Por ejemplo, en el caso de una clase Animal.

```
perro = Animal()    # Se llama init o constructor.
perro()             # Se llama call pues se llama el objeto como función.
```

**8. ¿Cómo se organizan los módulos y paquetes en Python? ¿Qué es init .py?**

En Python los módulos son archivos .py en los que se contienen funciones/clases/métodos/variables que se quieren usar en otros archivos/programas. Los paquetes son conjuntos estructurados de módulos, estos permiten importar varios módulos en un mismo import [5]. Los paquetes se estructuran de manera que se guardan los distintos paquetes en directorios dentro de una misma carpeta con el nombre del paquete [6]. Para hacer esto se deben incluir archivos con el nombre `__init__.py` los cuales le indican al interprete que debe importar los módulos guardados en el directorio con los módulos. Sin el archivo el directorio no es tomado en cuenta, por lo que los `__init__.py` son fundamentales al crear paquetes. Pese a que pueden ser archivos vacíos, son útiles para especificar comportamientos a la hora de importar el paquete. Por ejemplo si se importa con el operador *, el archivo `__init__.py` debe contener una lista `__all__` que indica cuales módulos se incluyen en dicho import [6].

**9. Explique la diferencia entre métodos append() e extend() en listas de Python.**

Ambos métodos agregan elementos a listas, pero mientras que el método append agrega un solo elemento al final de la lista, el método extend puede agregar más de un elemento. Extend acepta más de un argumento (al contrario de append) e incluso puede agregar elementos por medio de iteraciones de otra lista. [7]

**10. ¿Cuál es la diferencia entre un método de clase y un método estático en Python?**

Un método estático en python es un método perteneciente a una clase que no modifica el estado del objeto al que pretenece y es propio de la clase no solo del objeto. Al contrario de un método normal, los métodos estáticos no reciben el "self" o el objeto en sí como parámetro, pero si reciben parámateros. Además un método estático no tiene acceso el objeto desde el que se llama a menos de que el objeto se pase como argumento. Un método estático se puede definir con el decorador `@staticmethod` y se puede llamar desde la clase (no tiene que crearse un objeto de dicha clase para llamarlo). [8]

**11. Hable sobre las diferencias entre herencia simple y herencia múltiple en Python.**

Por medio de herencia múltiple se pueden emplear métodos/atributos de varias clases en una sola. En cambio, con herencia simple solo se puede dar el proceso de herencia de una clase base a una clase derivada. Aparte de heredar de más de una clase, la herencia múltiple puede generar conflictos entre los métodos a usar si se crean métodos del mismo nombre en clases bases.

**12. ¿Cómo se manejan los errores de importación de módulos en Python?**

Se puede manejar los errores de importación de módulos empleando el manejo de errores normal con bloques try-except con el tipo de error ImportError. Al intentar importar un módulo que no se encuentra en el directorio/path o intentar importar un módulo que no existe el interprete genera un error ImporError. Este error se puede capturar con un bloque try y se da la respuesta adecuada por medio de un bloque except.

**13. ¿Cuál es la diferencia entre una clase y un objeto en Python?**

Una clase es un molde o modelo del cual un objeto define sus características. Mientras que la clase define los métodos/atributos que puede tener un objeto, no es un objeto en sí. Mientras que un objeto es una instancia específica de la clase, por ende posee las características definidas por la clase pero no es una clase. La clase es el molde mientras que el objeto es el que se moldea con la forma definida por la clase.

**14. Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.**

Una clase abstracta es aquella que contiene métodos requeridos por un conjunto de clases derivadas, la cual declara esos métodos pero no necesariamente los define, aún así puede tener métodos declarados. Por otra parte una interfaz es una herramienta similar que solo posee métodos abstractos (aquellos que solo se declaran, no se definen). Ambos cumplen la función similiar de proveer métodos abstractos para clases que luego van a emplear/sobreescribir los métodos que estos dan. Se diferencian del hecho de que las clases abstractas si pueden tener métodos definidos. Las clases abstractas se usan más para clases que son similares entre sí, mientras que las interfaces se prefieren para situaciones donde las implementaciones van a ser diferentes entre sí. [9]

**15. Explique el concepto de sobreescritura de métodos en Python y cómo se realiza.**

La sobreescritura de métodos en Python se puede realizar al crear clases herederas que vuelven a definir métodos ya definidos en sus clases bases. Al volver a definir un método en una clase heredera se "sobreescribe" el método anterior con las nuevas instrucciones. Esto significa que cuando se llama el método en la clase heredera se ejecuta el código del método definido en la clase heredera, no el de la clase base.

Referencias:

[1] https://www.geeksforgeeks.org/decorators-in-python/

[2] https://wiki.python.org/moin/Generators

[3] https://www.geeksforgeeks.org/generators-in-python/


[comment]: # (Para ir al siguiente link ir a la version renderizada no el source o ir a: https://www.geeksforgeeks.org/what-is-the-difference-between-__init__-and-__call__/)

[4] https://www.geeksforgeeks.org/what-is-the-difference-between-\_\_init\_\_-and-\_\_call\_\_/

[5] https://docs.python.org/3/tutorial/modules.html#packages

[6] https://docs.python.org/3/reference/import.html#regular-packages

[7] https://www.geeksforgeeks.org/append-extend-python/

[8] https://www.geeksforgeeks.org/class-method-vs-static-method-python/

[9] https://www.geeksforgeeks.org/difference-between-abstract-class-and-interface-in-python/