#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter starting year:");
	scanf("%d",&a);
	
	printf("enter ending year:");
	scanf("%d",&b);
	
	while(a<=b){
	if(a%4==0){
	printf("%d\t",a,b);}       
	 a++;	}
	
}
