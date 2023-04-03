#include<stdio.h>
int prime(int n)
{
    int i=1,b=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            b++;
        } 
    }
    return b;

}
void main()
{
    int n,b;
    printf("enter the value of n =");
    scanf("%d",&n);
    b=prime(n);
    if(b==2)
    {
        printf("prime");
        
    }
    else
    {
        printf("not a prime");
    }
    
}