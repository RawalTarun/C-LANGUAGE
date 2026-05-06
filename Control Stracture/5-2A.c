#include<stdio.h>

main()
{     int a,b,c,d;
      
      printf("enter first number:");
      scanf("%d",&a);
      
      printf("enter second number:");
      scanf("%d",&b);
      
      printf("enter third number:");
      scanf("%d",&c);
      
      
      if(a<b)
      { if (a<c)
          {d=a;}
      else {d=c;}}
	  else{if (b<c)
	       d=b;
	  else{ d=c;}
	  }       
      printf("THE MINIMUN VALUE IS:%d",d);
      
      
	  
}
