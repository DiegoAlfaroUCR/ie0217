# Se crea la super clase.
class SuperClass:
    def super_method(self):
        print("Super Class method called")

# Se crea una clase derivada de la super clase.
class DerivedClass1(SuperClass):
    def derived1_method(self):
        print("Derived class 1 method called")

# Se crea una clase derivada de la clase derivada.
class DerivedClass2(DerivedClass1):
    def derived2_method(self):
        print("Derived class 2 method called")

# Se crea un objeto de la clase DerivedClass2
d2 = DerivedClass2()

# Se pueden llamar los métodos de todas las clases desde la clase más derivada.
d2. super_method()

d2.derived1_method()

d2.derived2_method()