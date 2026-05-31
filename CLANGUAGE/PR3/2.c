#include<stdio.h>

main()
{
	int a, b=0;
	printf("ENTER THE NUMBER:");
	scanf("%d",&a);
	
	do{
		a=a/10;
		b++;}while(a!=0);
		
		printf("total number:%d",b);
		
		
}
