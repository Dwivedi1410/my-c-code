#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of n =");
    scanf("%d",&a);
    if(a==1)
    {printf("monday");}
    else if(a==2)
    {printf("tuseday");}
    else if(a==3)
    {printf("wednesday");}
    else if(a==4)
    {printf("thursday");}
    else if(a==5)
    {printf("friday");}
    else if(a==6)
    {printf("saturday");}
    else if(a==7)
    {printf("sunday");}
    else
    {printf("no result");}
    getch();
    return 0;
    

}