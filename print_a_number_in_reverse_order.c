#include<stdio.h>
void main()
{
    int n,rem,num=0;
    printf("enter the number you want to print in reverse =");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        num=(num*10)+rem;
        n=n/10;
    }
    printf("revers of a number is = %d \n",num);
    getch();
}