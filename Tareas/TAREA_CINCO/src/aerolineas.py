
class Aerolineas:
    def __init__(self, datos):
        self.carriers = datos["UNIQUE_CARRIER"].unique()
        self.max = len(self.carriers)
        self.datos = datos

    def __iter__(self):
        self.i = 0
        return self

    def __next__(self):
        if self.i <= self.max:
            self.i += 1
            unique = self.carriers[self.i]
            aerolinea = self.datos[self.datos["UNIQUE_CARRIER"] == unique]
            return aerolinea
        else:
            raise StopIteration
