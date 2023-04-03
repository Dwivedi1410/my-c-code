#include<stdio.h>
int factorial(int n)
{
    int a,f=1;
    for(a=1;a<=n;a++)
    {
        f=f*a;
    }
    return f;
}
void main()
{
     int n,b;
     printf("enter the value of n =");
     scanf("%d",&n);
     b=factorial(n);
     printf("factorial of %d is %d",n,b);

}