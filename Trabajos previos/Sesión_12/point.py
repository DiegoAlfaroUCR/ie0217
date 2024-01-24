# Se crea clase Point con herencia a objeto.
class Point(object):

    # Método new imprime argumentos
    # New es un método que se da antes de init, este crea el objeto.
    # ESTE LLAMA A INIT
    def __new__(cls,*args, ** kwargs):
        print("From new")
        print(cls)
        print(args)
        print(kwargs)

        # Se crea un objeto y se retorna.
        obj = super().__new__(cls)
        return obj

    # Constructor que inicializa atributos, se da después de new.
    # ESTE ES LLAMADO POR INIT
    def __init__(self, x = 0, y = 0):
        print("From init")
        self.x = x
        self.y = y

# Se crea clase SqPoint que hereda de clase Point.
class SqPoint(Point):
    # Atributos.
    MAX_Inst = 4
    Inst_created = 0

    # Método que asigna argumentos y tiene manejo de errores.
    def __new__(cls,*args, ** kwargs):
        if (cls.Inst_created >= cls.MAX_Inst):
            raise ValueError("Cannot create more objects")
        cls.Inst_created += 1
        return super().__new__(cls)