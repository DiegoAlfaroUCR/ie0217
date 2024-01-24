# Se crea una clase madre, con metodo info.
class SuperClass1:
    def info(self):
        print("Super Class 1 method called")

# Se crea otra clase madre, con metodo info.
class SuperClass2:
    def info(self):
        print("Super Class 2 method called")

# Se crea una clase derivada que hereda de ambas clases madres.
class Derived(SuperClass1, SuperClass2):
    pass

# Se crea un objeto derivado y se llama el método info
d1 = Derived()
d1.info()       # En este caso se llama el método de la primera clase madre.