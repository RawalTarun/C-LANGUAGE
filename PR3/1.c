#include<stdio.h>

main()
{
	char t='A';

	do{
		printf("%c\t",t);
		t=t+4;
		}while(t<='Z');
}
