#include<stdio.h>
void main()
{
    int r,a,b;
    printf("enter the number of rows you want in your pattern =");
    scanf("%d",&r);
    for(a=1;a<=r;a++)
{   
    for(b=r;b>=a;b--)
    {
        printf("*");
    }
    printf("\n");
}
}