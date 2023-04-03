#include<stdio.h>
int sum(int n1,int n2)
{ 
    if(n1>n2)
    {
        return 0;
    } 
    else
    {
        return n1+sum(n1+2,n2);
    }
}
void main()
{
    int n1,n2,f;
    printf("enter the value of n1 and n2=");
    scanf("%d  %d",&n1,&n2);
    f=sum(n1,n2);
    printf("%d",f);
}
            
    
    