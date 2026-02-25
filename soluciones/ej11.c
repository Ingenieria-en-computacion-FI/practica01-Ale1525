&a[0] = 1000
&a[1] = 1008
&a[2] = 1016

/*
1. Tamaño del tipo:
El incremento es de 8 bytes entre cada elemento,
por lo tanto sizeof(tipo) = 8 bytes.

2. Tipo posible:
Un tipo de dato posible en C que ocupa 8 bytes es double
(también podría ser long long en muchos compiladores).

3. Fórmula usada:
&a[i] = &a[0] + i * sizeof(tipo)
*/
