#include<stdio.h>

int main(){
    const int n = 6;
    int arr[6] = {1,2,3,5,3,1};
    int i;
    int* ptr = &arr[0]; //pointer to integer


    printf("Array address arr:\t%d\n", arr);
    for (i = 0 ; i < n; i++) {
        printf("*(arr + %d): %d\n", i, *(arr + i));
    }
    printf("Pointer ptr\t%d\n\n",ptr);

    for (i = 0; i < n; i++) {
        printf("*(ptr + %d): %d\n", i, *(ptr + i));
    }


    return 0;
}