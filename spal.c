#include<stdio.h>
#include<string.h>
int main(){
    char pal[100];
    int i;
    int len;
    int n = 0;
    printf("Enter a string:");
    scanf("%s", pal);
    len = strlen(pal);
    for(i=0;i < len ;i++){
        if(pal[i] != pal[len-i-1]){
            n = 1;
            break;
        }
    }
    
    if (n) {
        printf("%s is not a palindrome", pal);
    }    
    else {
        printf("%s is a palindrome", pal);
    }
    return 0;
}

