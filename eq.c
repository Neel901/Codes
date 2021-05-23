#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	int f;
	int g;
	int h;
	int x;
	int y;
	printf("Enter coefficients\n");
	printf("Order: Ax + By = C, Fx + Gy = H\n");
	scanf("%d %d %d %d %d %d",&a,&b,&c,&f,&g,&h);
	y = (a*h - f*c)/(a*g - f*b);
	x = (c - b*y)/a;
	printf("(%d)x+(%d)y=(%d)\n (%d)x+(%d)y=(%d)\n",a,b,c,f,g,h);
	printf("(%d,%d)",x,y);
}