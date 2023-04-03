#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("enter the number of rows you want to print =");
    scanf("%d",&r);
    printf("enter the nuber of coulubs you want to print =");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}