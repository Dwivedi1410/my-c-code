#include<stdio.h>
void prime(int n)
{
   int i,b=0;
   for(i=1;i<=n;i++)
   {
    if(n%i==0)
    {
        b++;
    }
   }
   if(b==2)
   {
    printf("prime");
   }
   else
   {
    printf("not a prime");
   }
}
void main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d",&n);
    prime(n);
}