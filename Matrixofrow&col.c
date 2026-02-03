#include<stdio.h>
void main()
{
int row,col;
printf("enter no of row :  \n");
scanf("%d",&row);
printf("enter no of col :  \n");
scanf("%d",&col);
for (int i=1;i<=row;i++)
{
for (int j=1;j<=col;j++)
{
if (i==1||i==row||j==1||j==col)
{
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}
}
