#include<stdio.h>
int fab(int i)
{   
    int c;
    if(i==1)
    return 0;
    else if(i==2)
    return 1;
    else
    {
        c= fab(i-2) + fab(i-1);
        return c;
    }

}
void main()
{
    int i,n,f=0;
    printf("enter the value of n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    
        f= f+fab(i);
        printf("%d",f);
    
}