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
            if(j==(i-j))
            {
                printf(" ");
            }
            else
            {
                if(j==r || i==1 || (i+1-j)==1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}