#include<stdio.h>
int factorial(int n)
{
    if(n==1)
    return 1;
    else
    {
      return n*factorial(n-1);
    }
}
void main()
{
     int n,b;
     printf("enter the value of n =");
     scanf("%d",&n);
     b=factorial(n);
     printf("factorial of %d is %d",n,b);

}