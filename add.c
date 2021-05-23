#include<stdio.h>
// gcc add.c -o add
int sum(int, int);
int main(){
	int a, b;
	printf("Enter a and b: ");
	scanf("%d %d",&a, &b);
	printf("sum is: %d\n", sum(a,b) );
	return 0;
}

int sum(int a, int b){
	return a+b;
}
