#include<stdio.h>
void main()
{
    int r,i,j;
    printf("enter rows =");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=0;j<=r+(r-i);j++)
        {
            if(j<(r-i))
            {
                printf(" ");
            }
            else if(i==1 || i==r)
            {
                printf("*");
            }
            else if(j==(r-i) || j==r+(r-i))
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