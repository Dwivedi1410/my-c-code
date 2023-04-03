#include<stdio.h>
void main()
{
    int u;
    double a;
    printf("enter the amount of unit you have used =");
    scanf("%d",&u);
    if(u<=50 && u>0)
    {
        a=(0.5)*u;
        printf("your electricity bill is =%lf",a);
    }
    else if(u<=150 && u>50)
    {
        a=(0.75*(u-50)) + 25;
        printf("your electricity bill is =%lf",a);
    }
    else if(u<=250 && u<150)
    {
        a=(1.20*(u-150)) + 100;
        printf("your electricity bill is =%lf",a);
    }
    else if(u>250)
    {
        a=(1.5*(u-250) + 220);
        printf("your electricity bill is =%lf",a);
    }
    getch();
}