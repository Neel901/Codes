#include<stdio.h>

int main() {
    short int shortX;
    long longX;
    float floatX;
    char charX;
    double doubleX;

    printf(" short %d byte\n", sizeof(shortX));
    printf(" long %d byte\n", sizeof(longX));
    printf(" float %d byte\n", sizeof(floatX));
    printf(" char %d byte\n", sizeof(charX));
    printf(" double %d byte\n", sizeof(doubleX));

    return 0;
}