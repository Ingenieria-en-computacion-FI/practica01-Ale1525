
#include <stdio.h>

int main() {
    int a[3];
    int b[3];
    int c[3];

    printf("Direcciones de a:\n");
    for (int i = 0; i < 3; i++) {
        printf("&a[%d] = %p\n", i, &a[i]);
    }

    printf("Direcciones de b:\n");
    for (int j = 0; j < 3; j++) {
        printf("&b[%d] = %p\n", j, &b[j]);
    }

    printf("Direcciones de c:\n");
    for (int k = 0; k < 3; k++) {
        printf("&c[%d] = %p\n", k, &c[k]);
    }

    return 0;
}
