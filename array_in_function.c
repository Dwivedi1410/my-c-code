#include<stdio.h>
void array(int a[2][2])
{
    int i,j,s=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int i,j,a[2][2];
    printf("input elements =");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    array(a);
}