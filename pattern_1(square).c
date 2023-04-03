#include<stdio.h>
void main()
{
    int i,j,a,b;
    printf("enter the value of number of rows you want in your pattern =");
    scanf("%d",&i);
    printf("enter the number of columbs you want in your pattern =");
    scanf("%d",&j);
    for(a=1;a<=i;a++)
    {
        for(b=1;b<=j;b++)
        {
            printf("*");
        }
        printf("\n");
    }
}