/*
Sin ejecutar determinar cual direccion es mayor:
&m[0][3]
&m[1][0]

Supongamos:
int m[F][C];
Almacenamiento en C es por filas (row-major order)
sizeof(int) = 4 bytes

Formula general:
Dir(m[i][j]) = base + (i * C + j) * sizeof(int)

Calculamos posiciones lineales:

m[0][3] → (0 * C + 3) = 3
m[1][0] → (1 * C + 0) = C

Como C (numero de columnas) es al menos 4 en una matriz donde existe m[0][3],
entonces:

C ≥ 4

Por lo tanto:
C > 3

Entonces:

(i * C + j) de m[1][0]  >  (i * C + j) de m[0][3]

Multiplicando por sizeof(int) no cambia el orden.

Conclusion:
&m[1][0] es mayor que &m[0][3]
porque al almacenarse por filas, primero se guarda toda la fila 0
y despues comienza la fila 1.
*/
