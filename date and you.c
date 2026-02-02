#include<stdio.h>
void main()
{
    int you,date;
    printf("entert the rate of date and you\n");
    scanf("%d %d",&you,&date);
    if(you<=2||date<=2)
    {
        printf("0");
    }
    else if(you >=8||date>=8)
    {
        printf("2");
    }
    else
    {
        printf("1");
        
    }
}