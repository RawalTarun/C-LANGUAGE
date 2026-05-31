#include<stdio.h>

main()
{
	int BS,HRA,DA,TA,GS;
	
	printf("enter base salery:");
	scanf("%d",&BS);
	
	printf("enter hra:");
	scanf("%d",&HRA);
	
	printf("enter da:");
	scanf("%d",&DA);
	
	printf("enter ta:");
	scanf("%d",&TA);
	
	GS=BS+(BS*HRA/100)+(BS*DA/100)+(BS*TA/100);
	
	printf("gross salery is:%d",GS);
	
	
	
}
