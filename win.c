#include<stdio.h>

void main(){
	int n;
	int l;
	int i;
	int a;
	int sum;
	sum = 0;
	printf("Enter number of numbers: ");
	scanf("%d",&n);
	for (i=1; i<=n; i++){
		printf("Enter %d number: ",i);
		scanf("%d",&a);
		sum = sum + a;
	}
	if (sum>=2192002){
		printf("win");
	}
	else
		printf("lose");
}