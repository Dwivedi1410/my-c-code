#include<stdio.h>
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum is %d",sum);
}
void main()
{
    int a,b,c;
    printf("enter value of a and b =");
    scanf("%d%d",&a,&b);
    add(a,b);
    }