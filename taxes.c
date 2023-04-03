#include<stdio.h>
#include<math.h>
void main()
{
    double a,t;
    printf("enter your income =");
    scanf("%lf",&a);
    if(a<=150000 && a>0)
    {
        printf("no tax");
    }
    else if(a<=300000 && a>150000)
    {
        t=(a-150000)*(0.1);
        printf("you have to pay %lf as a tax",t);
    }
    else if(a<=500000 && a>300000)
    {
        t=((a-450000)*0.2 + 30000);
        printf("you have to pay %lf as a tax",t);
    }
    else if(a>500000)
    {
        t=((a-500000)*0.3 + 30000 +40000);
        printf("you have to pay %lf as a tax",t);
    }
    getch();

}