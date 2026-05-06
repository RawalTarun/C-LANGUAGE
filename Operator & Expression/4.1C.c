#include<stdio.h>
main()
{
	float x,y,a;
	
	printf("enter value of X:");
	scanf("%f",&x);
	
	printf("enter value of Y:");
	scanf("%f",&y);
	
	a=(x+y)*(x+y)*(x+y);
	
	printf("answer:%.2f",a);
	
}
