#include<stdio.h>
int main(){
    oddEven();
    return 0;
}
int oddEven(){
    int m;
    scanf("%d",&m);
    if (m % 2 == 0){
        printf("even");
    }    
    else{
        printf("odd");
    }
    return 0;
}  
