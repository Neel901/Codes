#include<stdio.h>

int main() {
	int x;
	int y;
	char l;
	
	printf("Enter 2 numbers: ");
	
	scanf("%d %d",&x, &y);
	printf("\nYou have entered %d and %d\n", x, y );
	printf("What operation do you want type\n a for addition\n s for subtraction\n d for divison\n m for multiplication\n");
	scanf(" %c",&l);
	if (l == 'a'){
		printf("You have entered %d and %d\n", x, y );
		printf("Addition: %d",x+y);
	}
	else if ( l == 'm'){
		printf("You have entered %d and %d\n", x, y );
		printf("multiplication %d",x*y);
	}
	else if (l == 's'){
		printf("You have entered %d and %d\n", x, y );
		printf("subtraction %d",x-y);
	}
	else if (l == 'd'){
		printf("You have entered %d and %d\n", x, y );
		printf("divison %d",x/y);
	} else{
		printf("instruction padh na bey");
	}
	
}
