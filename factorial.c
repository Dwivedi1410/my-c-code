#include<stdio.h>
#include<math.h>
void main()
{
    int n,a=1,fac=1;
    printf("enter the number =");
    scanf("%d",&n);
    while(a<=n)
    {
        fac=fac*a;
        ++a;
    }
    printf("factorial of %d is = %d",n,fac);
    getch();
}