#include<stdio.h>

int main(){
	int n;
	int x;
	int t;
	int a;
	int sum;
	a = 0;
	t = 1;
	scanf("%d",&n);
	for(x = 1; x <= n; x++){
		sum = a + t;
		a = a + 1;
		t = t + a;
		printf("%d ",sum);

	}
}
