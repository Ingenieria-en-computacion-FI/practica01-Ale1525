#include <stdio.h>

int gigante[10000000];

int main() {

    /*
    El arreglo no puede ponerse en la parte del main porque seria
    una declaracion local y como el arreglo es muy grande debe declararse afuera,
    o sea tienes que declararla como una variable global.
    Las variables globales se almacenan en BSS/DATA.
    El stack o pila es donde se almacenan las variables locales,
    y aqui podria ir si fuera mas pequeña.
    */

    printf("Direccion del primer elemento: %p\n", &gigante[0]);
    printf("Direccion del ultimo elemento: %p\n", &gigante[9999999]);

    printf("Tamano total en bytes: %llu\n", sizeof(gigante));

    return 0;
}
