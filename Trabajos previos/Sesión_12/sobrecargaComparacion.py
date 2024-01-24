# Se crea clase.
class Person:
    # Constructor
    def _init_(self, name, age):
        self.name = name
        self.age = age

    # Se hace sobrecarga de operador "less than" o <
    def lt_(self, other):
        return self.age < other.age

# Se crean objetos,
p1 = Person("Alice", 20)
p2 = Person("Bob", 30)

# Se usa el operador de comparación para retornar bool.
print(p1 < p2) # True
print(p2 < p1) # False