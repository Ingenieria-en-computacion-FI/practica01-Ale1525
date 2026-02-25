int m[3][5];
base = 4000;

/*
Datos:
Numero de columnas = 5
sizeof(int) = 4 bytes

Formula usada:
Dir(m[i][j]) = base + (i * numero_columnas + j) * sizeof(int)

1. Direccion de m[2][4]:

Dir(m[2][4]) = 4000 + (2 * 5 + 4) * 4
             = 4000 + (10 + 4) * 4
             = 4000 + 14 * 4
             = 4000 + 56
             = 4056

2. Direccion de m[1][3]:

Dir(m[1][3]) = 4000 + (1 * 5 + 3) * 4
             = 4000 + (5 + 3) * 4
             = 4000 + 8 * 4
             = 4000 + 32
             = 4032

3. Diferencia entre ambas:

4056 - 4032 = 24 bytes
*/
