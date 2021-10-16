#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        a[i] = n;
        n = n - 1;
       
    }
    printf("%d",a[9]);
    //Complete the code to print the pattern.

    // a = n;
    // while(n!=0){
    //     for (int i = 1; i <= (a + (a - 1)); i++){
    //         printf("%d ",n);
    //     }
    //     printf("\n");
    //     n = n-1;
    // }
    // n = 2;
    // while(n <= a){
    //     for (int i = 1; i <= (a + (a - 1)); i++){
    //         printf("%d ",n);
    //     }
    //     printf("\n");
    //     n = n+1;
    // }
    
    

    return 0;
}