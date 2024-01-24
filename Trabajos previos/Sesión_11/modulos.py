## Formas de importar un módulo
import math     # Manera estándar, requiere prefijo math
print("El valor de pi es:", math.pi)

import math as m    # Con prefijo nuevo
print(m.pi)

from math import pi # Solo importando lo requerido
print(pi)

from math import * # Importando todas las funciones.
print(pi)