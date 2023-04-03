#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b,f=1;
    printf("for how many terms you want to print this series =");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=a;b++)
        {
            f=f*b;
        }
        printf("%d + ",f);
        f=1;
    }
}