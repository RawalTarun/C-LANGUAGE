#include<stdio.h>
main()
{
	int a,b,third;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	third=a;
	a=b;
	
	printf("after swapping:");
	printf("a=%d\nb=%d",a,b);	
}
