#include<stdio.h>

int main(){
	int n;
	int t;
	int x;
	t = 1;
	scanf("%d",&n);
	for(x = 2; x <= n+1; x++){
		printf("%d ",t);
		t = t + x;
	}
}
