#include<stdio.h>
void squareByPointer(int*);
int main() {

    int x;
    int* ptr = &x; //we are initializing to the address of x
    // *ptr = 6;
    x = 17;
    printf("*ptr: %d, x: %d\n", *ptr, x);
    printf("ptr: %x\n",ptr); /// Outputs the memory address of x in base 16

    int n = 12;
    printf("n before square: %d\n", n);

    squareByPointer(&n);
    printf("n after square: %d\n", n);
    int nSq;
    nSq = squareSinPointer(12);
    printf("nSq: %d\n", nSq);

    return 0;
}

void squareByPointer(int *numPtr) {
    *numPtr = *numPtr * *numPtr;
}

int squareSinPointer(int num) {
    return num * num;
}