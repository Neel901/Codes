#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int a=0;
    int sum=0;
    scanf("%d", &n);
    for(int i = 1;i<=6;i++){
        a = n % 10;
        sum = sum + a;
    }
    printf("%d",sum);
    
    
    return 0;
}
