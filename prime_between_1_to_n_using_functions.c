#include<stdio.h>
void prime(int n)
{
    int a,b,count=0;
    printf("prime numbers between 1 to %d are =",n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            if(a%b==0)
            {
               count++;
            }
        }
        if(count==2)
        {
            printf("%d  ",a);
        }
        count=0;
    }
}
void main()
{
    int n;
    printf("enter the value of n=");
    scanf("%d",&n);
    prime(n);
}