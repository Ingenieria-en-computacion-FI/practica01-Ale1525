/*
Ejercicio 8

Datos:
base = 2000
sizeof(int) = 4
Dir(m[1][2]) = 2024

Formula general:
Dir(m[i][j]) = base + (i * C + j) * sizeof(int)

Sustituimos i = 1, j = 2:

2024 = 2000 + (1 * C + 2) * 4

Restamos base:

2024 - 2000 = (C + 2) * 4
24 = (C + 2) * 4

Dividimos entre 4:

6 = C + 2
C = 4

1. Numero de columnas:
C = 4

2. Tamaño total:

Como m[1][2] existe, al menos hay 2 filas (i = 0 y i = 1).

Total elementos = 2 * 4 = 8
Tamaño total en bytes = 8 * 4 = 32 bytes
*/
