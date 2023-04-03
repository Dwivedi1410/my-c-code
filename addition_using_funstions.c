#include<stdio.h>
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void main()
{
    int a,b,c;
    printf("enter the value of a and b =");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("sum is %d",c);
}