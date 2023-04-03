#include<stdio.h>
void sum(int n,int a[20][20])
{    
    int s=0,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                s=s+a[i][j];
            }
        }
    }
    printf("%d",s);
}
void main()
{
    int i,j,n,a[20][20];
    printf("enter the number of rows in matrix =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    sum(a,n);
}