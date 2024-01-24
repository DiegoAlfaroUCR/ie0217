class Person:
    def __init__(self, name, age):
        self.name = name # public
        self.age = age # public


# Los protegidos solo es convención
class Person:
    def __init__(self, name, age):
        self._name = name # protected
        self._age = age # protected


class Person:
    def __init__(self, name, age):
        self.__name = name # private
        self.__age = age # private

p1 = Person("John", 20)
# Intentar acceder al nombre daría error pues se declaró privado.