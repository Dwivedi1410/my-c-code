#include<stdio.h>
int fab(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    {
        return fab(n-1) +fab(n-2);
    }
}
void main()
{
    int n,i,s=0;
    printf("enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+fab(i);
    }
    printf("%d",s);
}
