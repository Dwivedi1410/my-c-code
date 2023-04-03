#include<stdio.h>
void main()
{
    int r,i,j;
    printf("enter rows =");
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=(r+i);j++)
        {
            if(i==1)
            {
                printf("*");
            }
           else if(j==i || j==(r+i))
            {
                printf("*");
            }
            else if(i==r)
            {   if(j>=r)
               { printf("*");  }
               else
               { printf(" ");  }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}