#include<stdio.h>
void main()
{
int a;
printf("enter the value in a:\n");
scanf("%d",&a);
int lower=(a>=-6);
int upper=(a<=7);
int res=(lower)&&(upper);
printf("%d is the range of -6 to 7 is %d",a,res);
}