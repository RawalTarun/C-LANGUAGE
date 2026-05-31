#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("ENTER ANY NUMBER:");
	scanf("%d",&a);
	
	d=a%10;
	while(a>=10)
	
	a=a/10;
	c=a;
	b=c+d;
	  
	printf("sum of last two digit is:%d",b);
		
	}
