#include<stdio.h>
#include<math.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],r1,r2,c1,c2,k,i,j;
    printf("enter the size of first array =");
    scanf("%d%d",&r1,&c1);
    printf("enetr the elements of first array =");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the size of second array =");
    scanf("%d%d",&r2,&c2);
    printf("enter the elements of second array =");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c1=r2)
    {
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {   c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    } 
    printf("multiplication of two matrix is =\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    }
    else
    {
        printf("matrix multipliaction is not posiible");
    }
}