#include<stdio.h>
void sum(int n)
{
    int b,a,sum=0;
    b=n;
    while(n!=0)
    {
    a=n%10;
    sum=sum+a;
    n=n/10;
    }
    printf("sum of digits of a number %d is %d",b,sum);

}
void main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d",&n);
    sum(n);
}