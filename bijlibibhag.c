#include<stdio.h>
#include<math.h>
int main(){
    int x;
    float am;
    printf("Enter number of untits spent: ");
    scanf("%d",&x);
    if(x<=200){
        am = x*0.8;
        printf("Total amount is %f",am+100);
    }
    if(x>200 && x<=300){
        am = 160 + ((x-200)*0.9);
         if(am+100>400){
            am = am + 100 + ((am+100)*0.15);
            printf("Total amount is %f",am);
        }
         else{
            printf("Total amount is %f",am+100);
        }
    }
    if(x>300){
        am = 160 + 90 +((x-300)*1);
        if(am+100>400){
            am = am + 100 + ((am+100)*0.15);
            printf("Total amount is %f",am);
        }
        else{
            printf("Total amount is %f",am+100);
        }
    }
}