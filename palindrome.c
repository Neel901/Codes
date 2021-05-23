#include<stdio.h>
#include<math.h>
int main(){
    int n = 720906292;
    int rem;
    int quo;
    int arr[10];
    // printf("enter two digit positive integer: ");
    // scanf("%d",&n);
    quo = n;
    int num_digits = 0, d;
    while (quo/10 > 0){
        rem = quo%10;
        quo = quo/10;
        arr[num_digits] = rem;
        num_digits = num_digits + 1;
        printf("%d",rem);
    }
    arr[num_digits] = quo; //2
    printf("%d\n",quo);
    int j;
    double power10;
    d = num_digits;
    int reversed_num = 0;
    for (j = 0; j < num_digits+1; j++) {
        // printf("%d\n",j); //0, 1, 2
        power10 =  pow(10.0, d);
        d = d - 1;
        reversed_num = reversed_num + arr[j] * power10;
    }
    if (reversed_num == n) {
        printf("palindrome");
    } else {
        printf("not palindrome");
    }
    return 0;

}

