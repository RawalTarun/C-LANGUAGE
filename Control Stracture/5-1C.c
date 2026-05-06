#include<stdio.h>

main()

{
	float MATHS,SCIENCE,ENGLISH,AVERAGE;
	
	printf("ENTER MATHS MARKS:");
	scanf("%f",&MATHS);
	
	printf("ENTER SCIENCE MARKS:");
	scanf("%f",&SCIENCE);
	
	printf("ENTER ENGLISH MARKS:");
	scanf("%f",&ENGLISH);
	
	
	AVERAGE=(MATHS+SCIENCE+ENGLISH)/3;
	
	printf("AVERAGE MARKS IS:%.2f\n",AVERAGE);
    
	
}


