#include<stdio.h>
#include<math.h>
void main()
{
    int n,d,n1,rem,num=0;
    printf("enter the number you want to check armstrong or not =");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        n=n/10;
        d++;
    }
    n=n1;
    while(n1!=0)
    {
        rem=n1%10;
        num=num+pow(rem,d);
        n1=n1/10;
    }
    if(n==num)
    {
        printf("armstong");
    }
    else
    {
        printf("not an armstrong");
    }
    getch();
}