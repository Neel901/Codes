#include<stdio.h>
int main(){
    int n = 569;
    int rem;
    int quo;
    // printf("enter two digit positive integer: ");
    // scanf("%d",&n);
    quo = n;
    while (quo/10 > 0){
        rem = quo%10;
        quo = quo/10;
        printf("%d",rem);
    }
    printf("%d",quo);

}

