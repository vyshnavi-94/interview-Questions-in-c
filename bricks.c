// Online C compiler to run C program online

#include <stdio.h>
void main()
{
int big;
int small;
int goal;
printf("enter the  values of the big small and goal\n");
scanf("%d %d %d",&big,&small,&goal);
int required=goal/5;
if(required<=big)
{
    int rem=goal-(required*5);
    if(rem<=small)
    {
        printf("true");
    }
    else
    {
        int rem=goal-(big*5);
        if(rem<=small)
    {
        printf("false");
    }
    else
    {
        printf("false");
        
    }
    }
}
    }
