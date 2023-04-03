#include<stdio.h>
void fabo(int n)
{
    int a=0,b=1,c=0;
    if(n==1)
    {printf("0");}
    else if(n==2)
    {printf(" 0  1");}

    else
    {   printf(" 0  1  ");
        for(int d=3;d<=n;d++)
       {
       
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
        c=0;
       }
    }
}
void main()
{
    int n;
    printf("enter the number of terms you want to print this series=");
    scanf("%d",&n);
    fabo(n);
}