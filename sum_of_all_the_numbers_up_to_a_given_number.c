#include<stdio.h>
void main()
{
    int n,a=1,sum=0;
    printf("enter the number =");
    scanf("%d",&n);
    while(a<=n)
    {
        sum=sum+a;
        a=a+1;
    }
    printf("sum of all the numbers upto %d is = %d",n,sum);
    getch();

}