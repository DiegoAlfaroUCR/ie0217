import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


class Prestamo:
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        # Se guardan las variables dadas al constructor y
        # se calcula amortizacion.
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        # Calcular la amortizacion es lo mismo que cuotas mensuales
        # pero sin los intereses.
        try:
            # Se saca interes mensual como digito no porcentaje.
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100

            # Se calcula la cuota mensual con la formula.
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual)**-self.cuotas)
            self.cuotaMensual = cuota_mensual

            # Se genera una variable del saldo a pagar, inicia como el monto
            saldo_restante = self.monto_prestamo

            # Se inicia la lista de cuotas.
            amortizacion = []

            # Se itera por cada cuota de 1 hasta la cantidad de cuotas + 1
            for cuota in range(1, self.cuotas + 1):
                # Se calcula el interes a ese punto es con compound interest.
                interes_pendiente = saldo_restante * tasa_interes_mensual

                # Se calcula la amortizacion como la cuota menos el interes.
                amortizacion_principal = cuota_mensual - interes_pendiente

                # Se le resta al saldo restante la amortizacion
                # OJO SOLO SE RESTA ESTO, NO LA PARTE CON INTERESES.
                saldo_restante -= amortizacion_principal

                # Se agregan diccionarios para las cuotas, intereses,
                # amortizacion y saldo restante.
                amortizacion.append({
                    "Cuota": cuota,
                    'Intereses': interes_pendiente,
                    'Amortizacion': amortizacion_principal,
                    'Saldo restante': saldo_restante})

                # Se retorna lista de amortizacion.
            return amortizacion
        # Manejo de errores.
        except ZeroDivisionError:
            print("ERROR: La cantidad de cuotas no puede ser cero.")
            return []

    def generar_reporte(self, arhivo_salida):
        try:
            # Se usa pandas para pasar la amortizacion a un csv.
            df = pd.DataFrame(self.amortizacion)
            df.to_csv(arhivo_salida, index=False)
            print(f"Reporte generado con exito: {arhivo_salida}")
        except Exception as e:
            # Se usa método mágico para entregar el tipo de excepcion como str.
            print(f"Ocurrió un error al generar el reporte: {str(e)}")

    def graficar_amortizacion(self):
        # Se usan dataFrames
        df = pd.DataFrame(self.amortizacion)

        # Se crea un array con los intereses y las amortizaciones.
        data = np.array([df['Intereses'], df['Amortizacion']])

        # Se hacen 2 series de barras, una con el interes y otra
        # con la amortización.
        # Se usa el índice de data para retornar los valores de cada uno.
        plt.bar(df['Cuota'], data[0], label='Interés')
        plt.bar(df['Cuota'], data[1], bottom=data[0])

        # Se personaliza y muestra el grafico.
        plt.xlabel('Número de cuota')
        plt.ylabel('Monto ($)')
        plt.title('Amortizacion e Interés por Cuota')
        plt.show()


def main():
    try:
        # 1 Pedir el monto al usuario
        monto = float(input("Ingrese el monto del prestamo: "))

        # 2 Pedir la tasa de interes anual (%)
        interes = float(input("Ingrese el interes del prestamo (%): "))

        # 3 Pedir la cantidad de cuotas
        cuotas = int(input("Ingrese la cantidad de cuotas del prestamo: "))

        # 4 Instanciar el prestamo
        miPrestamo = Prestamo(monto, interes, cuotas)

        # 5 Generar el reporte
        miPrestamo.generar_reporte("prestamo.csv")

        # 6 Imprimir informacion (monto, tasa, cuotas)
        print(f"Se generó el reporte para el prestamo con monto {monto},",
              f"tasa de interés de {interes} y {cuotas} cuotas.")

        print(f"Se tiene una cuota mensual de: {miPrestamo.cuotaMensual}")

        # 7 Graficar la amortización
        miPrestamo.graficar_amortizacion()

    # 8 Manejo excepciones: ValueError y el genérico
    except ValueError:
        print("ERROR: Ingresó un dato de tipo incorrecto,",
              "Intereses y monto deben ser flotantes/ints,",
              "cantidad de cuotas debe ser entero.")

    except Exception as e:
        print(f"ERROR: Se generó un error: {str(e)}")


if __name__ == "__main__":
    main()
