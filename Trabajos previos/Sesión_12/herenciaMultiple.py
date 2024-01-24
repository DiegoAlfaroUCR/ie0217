# Se crea la primera clase madre con un método.
class Mammal:
    def mammal_info(self):
        print("Mammals can give direct birth.")

# Se crea la segunda clase madre con un método.
class WingedAnimal:
    def winged_animal_info(self):
        print("Winged animals can flap.")

# Se crea una clase Bat que hereda de ambas clases madres.
class Bat(Mammal, WingedAnimal):
    pass

# Se crea un objeto de clase Bat.
b1 = Bat()

# Se puede llamar ambos métodos bases desde la clase hija.
b1.mammal_info()
b1.winged_animal_info()