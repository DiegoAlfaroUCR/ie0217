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

    def evaluar_alergias(self, puntuacion, todasAlergias):
        # Se encuentran alergias y se retorna lista de ellas
        puntajesPosibles = self.retornarPuntos(puntuacion)
        encontradas = self.encontrarAlergias(puntajesPosibles, todasAlergias)
        return encontradas


"""instancia = TipoAlergias()
# instancia.ingresarAlergia()
opera = evaluacionEspecifica()
opera.mostrar_info(instancia.todasAlergias)
lista = opera.evaluar_alergias(2050, instancia.todasAlergias)
print("\n\n")
for x in lista:
    x.mostrar_info()
"""
