#include<stdio.h>
main()
{
	float p,r,n,si;
	
	printf("enter principal:");
	scanf("%f",&p);
	
	printf("enter rate:");
	scanf("%f",&r);
	
	printf("enter month:");
	scanf("%f",&n);
	
	si=(p*r*n)/100;
	
	printf("simple interest:%.2f",si);	
	
	
}
