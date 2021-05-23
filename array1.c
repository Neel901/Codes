#include<stdio.h>

int m(){
    printf("function m");
    return 0;
}

int main(){
    char c = 'c';
    char ascii = 97;
    printf("c: %c, ascii %c\n", c,ascii);
    printf("c: %d, ascii- %d\n", c,ascii);


    // char st = "s"; 
    // printf("st: %c\n", st); //galat
    // printf("---->>>> st: %s\n", st);  //print hi nhi hota hai

    // string constant
    // char chAr1[] = "Array";
    // printf("%s\n", chAr1);

    // char st[] = 's';
    // printf("%s", st);

    // char sentence[] = {'a', 'r', 'r', 'a', 'y', ' ', 'o', 'n', 'e', '\0'};
    // printf("%s\n", sentence);

    // sentence[3] = '\0';
    // printf("%s\n", sentence);

    //char sentence_without_null[] = {'u', 'n', 'o', ' ', 'd', 'o', 's', ' ', 't', 'r', 'e', 's'};
    //printf("sentence_without_null: %s\n", sentence_without_null);

    // char name[20];
    // fgets(name, sizeof(name), stdin);
    // printf("Name: %s", name);

    int arr[] = { 5+4, 1, 200};
    int matrix[3];
    printf("Arr %d\n", arr[0]);
    printf("Address %d %d\n", &arr[0], arr);
    int i, n = 3, elem;
    for(i = 0; i < n; i++ ) {
        elem = arr[i];
        printf("element at index %d is %d\n", i, elem);
        scanf("%d",&matrix[i]);
    }
    return 0;
}