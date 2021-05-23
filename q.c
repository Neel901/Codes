#include<stdio.h>

void main(){
	char n;
	char q;
	q = 113;
	while(1) {
		printf("\nInput: ");
		scanf(" %c", &n);
		if (n == q){
			printf("\ndone");
			return;
		}
		printf("\n%c %c",q,n);
	}
		
}
