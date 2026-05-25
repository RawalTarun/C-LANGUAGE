#include <stdio.h>

 int main()
{
    int marks;
    char grade;

    printf("ENTER YOUR MARKS:");
    scanf("%d",& marks);

    grade=(marks>=90)?'A':(marks>=70)?'B':(marks>=50)?'C':(marks>=33)?'D':'F';
    printf("YOUR GRADE IS %C\n",grade);

    switch (grade)
    {
        case 'A':
        printf("EXCELLENT WORK\n");
        break;
        case 'B':
        printf("WELL DONE\n");
        break;
        case 'C':
        printf("GOOD JOB\n");
        break;
        case 'D':
        printf("YOU PASSED,BUT YOU COULD DO BETTER\n");
        break;
        case 'F':
        printf("SORRY,YOU FAILED!\n");
        break;
    }    
        if (marks>=33)
          printf("CONGRATULATION ! YOU ARE ELIGIBLE FOR THE NEXT LEVEL"); 
        else
          printf("PLEASE TRY AGAIN NEXT TIME");
         
    
           
    


}