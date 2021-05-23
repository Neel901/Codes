#include<stdio.h>
void add(int*); // declaration
int main() {

    int sum = 0;
    int* ptr_to_sum = &sum; // ptr_to_sum me sum ka address hai
    printf("sum main: %d", sum);
    add(ptr_to_sum); // sum ka address bhej diye add mein
    printf("\nsum main add ke baad: %d", sum);
    return 0;


}

void add(int* ptr_to_sum) { // definition
    *ptr_to_sum = 8+7; // ptr ko defreferencing
    printf("\n*ptr_to_sum add: %d", *ptr_to_sum);
}