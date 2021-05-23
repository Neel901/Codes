#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);

    oddEven(m);
    return 0;
}
int oddEven(int a){
    
    if (a % 2 == 0){
        printf("even");
    }    
    else{
        printf("odd");
    }
    return 0;
}  
