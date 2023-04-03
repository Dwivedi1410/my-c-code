
#include<stdio.h>
int fab(int n)
{   
    int c;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    else
    {
        c=fab(n-2) + fab(n-1);
        return c;
    }

}
void main()
{
    int i,n,f;
    printf("enter the value of n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=fab(i);
        printf("%d  ",f);
    }
}