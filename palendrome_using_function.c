#include<stdio.h>
void palen(int n)
{   
    int c=0,a,d=0;
    a=n; 
    while(n!=0)
    {
        c=n%10;
        d=(d*10)+c;
        n=n/10;
        c=0;
    }
    if(a==d)
    {printf("palendrome");}
    else
    {printf("not a palendrome");}
}
void main()
{
    int n;
    printf("enter the number =");
    scanf("%d",&n);
    palen(n);
}