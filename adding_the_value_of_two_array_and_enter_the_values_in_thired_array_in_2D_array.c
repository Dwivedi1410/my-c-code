#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,i,j;
    printf("enter the size of matrix =");
    scanf("%d%d",&r1,&c1);
   // printf("enter the number of columbs you want in your 2D array = ");
   // scanf("%d",&c1);
    printf("enter the value of 1'st array =");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
       // printf("\n");
    }
    printf("enter the value of 2'nd array =");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
       // printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
       // printf("\n");
    }
    printf("now thired array will be =\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

}