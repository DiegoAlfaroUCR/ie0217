
class Aerolineas:
    def __init__(self, datos):
        self.carriers = datos["UNIQUE_CARRIER"].unique()
        self.max = len(self.carriers) - 1
        self.datos = datos

    def __iter__(self):
        self.i = 0
        return self

    def __next__(self):
        if self.i <= self.max:
            unique = self.carriers[self.i]
            aerolinea = self.datos[self.datos["UNIQUE_CARRIER"] == unique]
            self.i += 1
            return aerolinea
        else:
            raise StopIteration
