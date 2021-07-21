#include<stdio.h>
int main(){
    int a,b,sum;
    a = 1;
    b = 2;
    add(&a,&b,&sum);
    printf("%d",sum);
}
void add(int* m , int* n , int* sum ){
    *sum = *m + *n;
}