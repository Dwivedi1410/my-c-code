#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("enter the size of matrix =");
    scanf("%d%d",&r,&c);
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
            b[j][i]=a[i][j];
        }
    }
    printf("trnaspose of matrix is = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    getch();
}