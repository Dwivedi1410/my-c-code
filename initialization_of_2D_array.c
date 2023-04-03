#include<stdio.h>
void main()
{
    int a[10][10],i,j,r,c;
    printf("enter the size of matrix =");
    scanf("%d%d",&r,&c);
    /*printf("enter the number of columbs ou want in your ,matrix =");
    scanf("%d",&c);*/
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}