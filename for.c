#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char* convertDigitTonumber(int);
char* oddEven(int);
int main() 
{
    int b=11,a=8;
    //scanf("%d\n%d", &a, &b);
  	// Complete the code.

    for(int i = a; i <= b; i++){
       
       if(i > 9){
           printf("%s\n",oddEven(i));
       }
       else{
           printf("%s\n", convertDigitTonumber(i));
       }
        

    }
    // 
    // 
    return 0;
}
char* convertDigitTonumber(int digit) {
    static char name[6];
    char names[9][6] = {
                        "one","two","three","four","five","six","seven","eight","nine"
                     };
    strcpy(name, *(names + digit - 1));
    return name;
}
char* oddEven(int number){
    static char type[5];
    char types[2][5] = {
                            "odd","even"
    };
    if (number % 2 == 0){
        strcpy(type, *(types + 1));
    }
    else{
        strcpy(type, *(types + 0));
    }
    return type;
}
