#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("enter how many rows you want to print =");
    scanf("%d",&r);
   for(i=1;i<=r;i++)
    {
        for(j=1;j<=r+(r-i);j++)
        {
           if(j>(r-i))
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