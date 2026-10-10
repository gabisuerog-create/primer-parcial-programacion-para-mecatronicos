Nombre: Gabriel jesus suero

Matricula: 2026-1107

Asignatura: Programacion para mecatronicos

Profesor: Winkins gabriel cedano

SOBRE EL REPOSITORIO:
Este proyecto implementa un programa modular en lenguaje c disenado para procesar una matriz numerica de dimensiones $N\times M$
Y evaluar una serie de metricas operativas por fila y columna segun limites de acumulacion$[L, U]$.

El sistema realiza:

1.Validacion estricta de entrada: control de rangos de dimensiones,limites $L$ y $U$, y valores de la matriz.

2.Calculo de metricas por fila: conteo de eventos validos, acumulacion de impacto, calculo de la racha maxima continua de eventos
y determinaciones del indice de inicio de dicha racha (base 1).

3.Calculo de eventos por columna: conteo acumulado de eventos ocurridos en cada una de las $M$ columnas.

4.Criterios de desempate: seleccion de la "fila prioritaria" segun jerarquia (mayor racha-mayor impacto-mayor eventos-menor indice de fila) y
seleccion de la "columna destacada" (mayor eventos-menor indice de columnas).

*REQUISITOS DE COMPILACION:

El codigo cumple estrictamente con el estandar "C11" y compila sin advertencias ( warnings) utilizando GCC.

### Comando de compilacion

'''bash

gcc-std-c11-wall-wextra 20261107.c -o reto.
