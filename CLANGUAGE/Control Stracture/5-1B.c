#include<stdio.h>

main()

{
	int a;
	
	printf("ENTER ANY NUMBER:");
	scanf("%d",&a);
	
	if(a>0)
	{printf("THIS NUMBER IS POSITIVE:");}
	else if(a<0)
	{ printf("THIS NUMBER IS NAGATIVE");}
	else
	{printf("THIS NUMBER IS NEUTRAL:");}
}
