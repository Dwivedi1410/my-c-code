#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b,c,x,s,f=1;
    //char x;
    printf("for how many terms you want to print this series =");
    scanf("%d",&n);
    printf("enter the value of x =");
    scanf("%d",&x);
    if(n==1)
    {
        printf("1");
    }
    else
    {   printf("1 + ");
        for(a=1;a<=n;a++)
        {
            for(b=1;b<=a;b++)
            {
                f=f*b;
            }
            c=pow((-1),a);
            s=c*pow(x,a);
            printf("(%d/%d) +",s,f);
            f=1;
        }
    }
}