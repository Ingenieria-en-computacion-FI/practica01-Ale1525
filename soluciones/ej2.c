/*
Sabemos que los arreglos se almacenan en memoria contigua.
Si suponemos que:
La dirección base es 1000
Un int ocupa 4 bytes
Entonces haciendo el calculo usando la formula &a[i] = base + i × sizeof(tipo).
a[0]=	1000 + 0×4	=1000
a[4]=	1000 + 4×4	=1016
a[5]=	1000 + 5×4	=1020

por lo tanto &a[5] > &a[4]

*/
#include <stdio.h>

int main() {
    int a[6];

    printf("Direccion de a[4]: %p\n", &a[4]);
    printf("Direccion de a[5]: %p\n", &a[5]);


    return 0;
}
