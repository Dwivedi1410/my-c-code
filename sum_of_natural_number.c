#include<stdio.h>
int sum(int n)
{ 
    int s=0; 
    if(n!=0) 
    {s=n+sum(n-1);}
    return s;
}
void main()
{
    int n,f;
    printf("enter the value of n=");
    scanf("%d",&n);
    
    f=sum(n);
    printf("%d",f);
    
}
            