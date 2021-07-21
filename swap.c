#include<stdio.h>
void swap(int*, int*);
int main(){
    int a = 1;
    int b = 2;
    swap(&a, &b);
    printf("%d is a and %d is b", a, b);
    return 0;
}

void swap(int* m, int* n) {
    printf("%d is m and %d is n\n",*m, *n);
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
    printf("%d is m and %d is n\n",*m, *n);
}