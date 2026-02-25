/*
Ejercicio 5

Un estudiante afirma:
Si a[0] = 1000 entonces a[10] = 1010.

Formula general de direccionamiento:
Dir(a[i]) = Dir(a[0]) + i * sizeof(tipo)

Sustituyendo i = 10:

Dir(a[10]) = 1000 + 10 * sizeof(tipo)

Caso 1: si sizeof(tipo) = 1 (por ejemplo char)
Dir(a[10]) = 1000 + 10 * 1
           = 1010
En este caso la afirmacion seria correcta.

Caso 2: si sizeof(tipo) = 4 (por ejemplo int)
Dir(a[10]) = 1000 + 10 * 4
           = 1000 + 40
           = 1040
En este caso la afirmacion es incorrecta.

Conclusion:
La afirmacion no es correcta en general.
Solo seria valida si el tamaño del tipo fuera 1 byte.
*/
