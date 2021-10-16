#include <stdio.h>
int main() {
    long long int x = 0;
    long long int r, N=0;
    long long int realN = x;
    
    while (x != 0) {
        r = x % 10;
        N = N * 10 + r;
        x /= 10;
    }
    if(realN==N){
        printf("palindrome hai");
        return 0;
    }
    else{
        printf("palindrome nahi hai");

        return 1;
    }
}
