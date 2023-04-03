#include<stdio.h>
void main()
{
    int r,a,b;
    printf("enter the number of rows you want to print in your pattern =");
    scanf("%d",&r);
    for(a=1;a<=r;a++)
    {
        for(b=1;b<=r;b++)
        {
            if(b<=(r-a))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }


    
}