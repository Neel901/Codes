#include<stdio.h>
#include<math.h>
int main(){
	int a;
	int b;
	int c;
	int x1;
	int x2;
	printf("Enter coeff a,b,c in ax**2 + bx + c = 0\n");
	scanf("%d %d %d",&a,&b,&c);
	x1 = (-b) + sqrt(b*b - 4*a*c);
	x2 = (-b) - sqrt(b*b - 4*a*c);
	printf("\n%d %d",x1,x2);
}
// gcc -g -O0 -Wall fact.c -o fact.o