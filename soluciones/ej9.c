#include <stdio.h>

int main() {
    int a[5];

    printf("&a[-1] = %p\n", &a[-1]);
    printf("&a[5]  = %p\n", &a[5]);

    return 0;
}
