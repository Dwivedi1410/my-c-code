#include<stdio.h>
void fac(int n)
{
    int sum=0,a,f=1;
    for(a=1;a<=n;a++)
    {
        for(int b=1;b<=a;b++)
        {
            f=f*b;
        }

        sum=sum+f;
        f=1;
    }
    printf("sum of factorials is =%d",sum);
}
void main()
{
    int n;
    printf("for how many terms you want to print this factorial series =");
    scanf("%d",&n);
    fac(n);
}