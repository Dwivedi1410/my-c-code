#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c,sum=0;
    printf("NOTE : MATRIX SHOULD BE ASQUARE MATRIX\n");
    printf("enter the size of matrix =");
    scanf("%d%d",&r,&c);
    printf("enter the values of array =");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             if(i==j)
             {
                sum=sum+a[i][j];
             }
        }
    }
    printf("sum of all diagonal elements is equal to =%d",sum);
}