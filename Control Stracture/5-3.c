#include<stdio.h>

main()
{
	int a,b,c,min;
	
	printf("enter first number:");
	scanf("%d",&a);
	
	printf("enter second number:");
	scanf("%d",&b);
	
	printf("enter third number:");
	scanf("%d",&c);
	
	min=(a<b)?(a<c?a:c):(c<b?c:b);
	

	
	printf("minimum number is:%d",min);
}
	
