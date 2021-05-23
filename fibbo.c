#include<stdio.h>

int main(){
	int n;
	int p;
	int i;
	int x;
	printf("enter number : ");
	scanf("%d", &p);
	n = 1; // second term
	x = 0; // first term
	int a;//next term
	printf("\n%d ",n);
	for ( i = 1; i < p; i++) {
		a = n+x; 
		printf("%d ",a);
		x = n;//first --second
		n = a;//second -- next
		
	}
	return 0;
}