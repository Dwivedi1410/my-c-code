#include<stdio.h>
void armstrong(int x)
{   int count=0,a,b,arm=0,n;
   // printf("value of x is = %d",x);
    for(n=1;n<=x;n++)
    {
    a=n;
    while(n!=0)
    {  
        n=n/10;
        count++;
    }
    n=a;
    while(a!=0)
    {    
        b=a%10;
        arm=arm+pow(b,count);
        a=a/10;
    }
    if(arm==n)
    {
        printf(" %d is an armstrong number \n",n);
    }
   /* else
    {
        printf("not an armstsrong");
    }*/
    count=0;
    arm=0;
    }
}
void main()
{
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    armstrong(n);
}
