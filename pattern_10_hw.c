#include<stdio.h>
void main()
{
    int r,i,j;
    printf("enter rows =");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r;j++)
        {
            if(i==1 || j==1 || j==(r+1-i))
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
