from alergia import Alergia
# from tiposAlergias import TipoAlergias


class evaluacionEspecifica(Alergia):
    def __init__(self):
        pass

    def retornarPuntos(self, numero):
        numeroBinario = int(format(numero, 'b'))
        listaPuntos = []
        while numeroBinario != 0:
            numCeros = len(str(numeroBinario)) - 1
            maximo = (10)**(numCeros)
            listaPuntos.append(int(str(maximo), 2))
            numeroBinario -= maximo
        return listaPuntos

    def encontrarAlergias(self, puntajesPosibles, Alergias):
        encontradas = []
        for puntos in puntajesPosibles:
            try:
                eval = next(obj for obj in Alergias if obj.puntos == puntos)
                encontradas.append(eval)
            except StopIteration:
                encontradas.append(Alergia("Alergia desconocida", puntos))
        return encontradas

    def evaluarAlergias(self, puntuacion, todasAlergias):
        # Se encuentran alergias y se retorna lista de ellas
        puntajesPosibles = self.retornarPuntos(puntuacion)
        encontradas = self.encontrarAlergias(puntajesPosibles, todasAlergias)
        return encontradas

    def infoUsuario(self, todasAlergias):
        puntuacion = int(input("Ingrese su puntuacion de alergia: "))
        evaluadas = self.evaluarAlergias(puntuacion, todasAlergias)
        print("\n-----Su Informacion Específica-----")
        print("Su puntuacion de alergia:", puntuacion)
        print("Las alergias a las que es suceptible: ")
        for alergia in evaluadas:
            alergia.mostrar_info()
