/*
Datos:
	&a[0] = 5000
	&a[3] = 5012
Sabemos que la fórmula general de dirección para un arreglo es:
"&a[i] = base + i × sizeof(tipo)." 
Entonces:
5012=5000+3⋅"sizeof(tipo)" 
5012-5000=3⋅"sizeof(tipo)" 
12=3⋅"sizeof(tipo)" 
"sizeof(tipo)"=4" bytes" 
Por lo tanto, deducimos que se trata de un “int”
Dirección de a[5]
Usamos la fórmula y recordamos que es int:
&a[5]= 5000+5(4)=5020
*/
