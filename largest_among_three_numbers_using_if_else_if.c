#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    printf("enter the value of c = ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greatest",a);
        }
        else if(c>a)
        {
            printf("%d is greatest",c);
        }
    }
    else
    {
       if(b>c)
       {
        printf("%d is greatest",b);
       }
       else if(c>b)
       {
        printf("%d is greatest",c);
       }
    }
    getch();

}