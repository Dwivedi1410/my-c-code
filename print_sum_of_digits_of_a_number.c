#include<stdio.h>
void main()
{
    int n,sum=0,rem;
    printf("enter the number whose sum of digit you want to find =");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",sum);
    getch();
}