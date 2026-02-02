#include <stdio.h>
void main()
{
    int cigars;
    int weekend;
    printf("enter the value of cigar");
    scanf("%d",cigars);
    if(weekend==1)
    {
        if(cigars>=40)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }    
     else
            {
            if(cigars>=40&&cigars<=60)
            {
                printf("true");
            }
            else
            {
                printf("false");
            }
            }
}
        
