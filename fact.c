#include <stdio.h>
int main(){
	unsigned int a;
	int i;
	int n;
	scanf("%d",&n);
	i = 1;
	a = n;
	while (i<n){
		a = a*i;
		i= i+1;
		
	}
	printf("%u", a);//33! max
}
// gcc -g -O0 -Wall fact.c -o fact.o