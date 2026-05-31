#include<stdio.h>

int main()
{
   int j,i;

   for(i=1;i<=5;i++)
    {
    for(j=1;j<=i;j++)
           if(i%2!=0)
            printf("%c",i+64);
           else
            if(j%2==0)
            printf("%d",j);
            else
            printf("%c",j+64);
            printf("\n");

                   
    }
}