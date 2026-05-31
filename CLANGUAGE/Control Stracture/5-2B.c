#include<stdio.h>

main()
{
	int a,b,c,d,max;
	
	printf("enter the first number:");
	scanf("%d",&a);
	
	printf("enter the second number:");
	scanf("%d",&b);
	
	printf("enter the third number:");
	scanf("%d",&c);
	
	printf("enter the fourth number:");
	scanf("%d",&d);
	
if (a > b) {
     if (a > c) {
    if (a > d) {
    max = a;
    } else {
    max = d;}
    } else {
    if (c > d) {
    max = c;} 
	else {
    max = d;}
        }
    } else {
    if (b > c) {
    if (b > d) {
    max = b;
    } else {
    max = d;}
    } else {
    if (c > d) {
    max = c;} 
	else {
    max = d;}
        }
    }

    printf("The maximum value is: %d", max);
    
}
