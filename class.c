#include<stdio.h>

int main(){
	int n1, n2, sum;
	printf("address for n1 :\t 0x%x",&n1);
	printf("\naddress for n2 :\t 0x%x",&n2);
	printf("\naddress for sum :\t 0x%x",&sum);
	return 0;

}

// 101)bin = 1*2^2 + 0*2^1 + 
// 61ff1c = 6*16^5 + 1*16*4 + 15*16^3 + 15*16^2 + 1*16^1 + 13*16^0