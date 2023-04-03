#include<stdio.h>
void main()
{
    int a=0,b=1,c,d=3,n;
    printf("enter the term upto which you want to print the fabonacci series =");
    scanf("%d",&n);
    if(n==1)
    {
            printf("%d",a);
    }
    else if(n==2)
    {
            printf("%d \n %d",a,b);
    }
    else
    {
        printf("%d\n%d\n",a,b);
    }
    while(d<=n)
    {  c=a+b;
       printf("%d \n",c);
       a=b;
       b=c;
       d++;
        
    }
    getch();

}