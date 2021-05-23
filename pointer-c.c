#include<stdio.h>

int main() {

    int num = 12;
    int* ptr_to_num; // pointer to integer

    ptr_to_num = &num; // address of numm

    num = *ptr_to_num; // deferencing, value of

    printf("*ptr_to_num: %d\n", *ptr_to_num);
    *ptr_to_num = *ptr_to_num + 5; 

    printf("*ptr_to_num: %d\n", *ptr_to_num); 

    char str[] = "Hola! Buenos dias"; // char array; str is pointer to str[0]
    printf("str: %s\n", str); 
    char* ptr_to_str = str + 6; // ptr_to_str is pointer to char; points to str[6]
    printf("ptr_to_str: %s\n", ptr_to_str);  
    ptr_to_str = ptr_to_str + 2; // points to str[8]
    printf("ptr_to_str + 2: %s\n", ptr_to_str);
    char* str2 = str + 8;
    printf("str + 8: %s\n", str);


    char* otra = "Adios! Hasta Manana";

    int mat[] = {9,8,7,6};  // mat is an integer pointer, pointing to mat[0]
    int* mat2 = mat;
    int mat22 = *(mat2 + 2);
    printf("mat: %d",mat22); // 
    return 0;
}