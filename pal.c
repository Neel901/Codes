#include <stdio.h>
int main() {
    int n; 
    int N = 0;
    int r;
    int realN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    realN = n;

    while (n != 0) {
        r = n % 10;
        N = N * 10 + r;
        n /= 10;
    }

    if (realN == N)
        printf("%d is a palindrome.", realN);
    else
        printf("%d is not a palindrome.", realN);

    return 0;
}