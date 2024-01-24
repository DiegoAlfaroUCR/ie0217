
# Esta es la sintaxis común de un constructor en python, pero no necesariamente
# es lo primero que ejecuta al crear el objeto.
class Bike:
    def __init__(self, name = ""):
        self.name = name

bike1 = Bike()
bike1 = Bike("Mountain Bike")
