#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter the number you want to check = ");
    scanf("%d",&n);
    if(n%5==0)
    {
        if(n%11==0)
        { printf("number is divisible by 5 and 11 both");}
    }
    else
    {
        printf("number is not divisible by 5 and 11 ");
    }
    getch();
}