#include<stdio.h>
#include<math.h>
int main()
{
    int y;
    printf("enter the year you want to check =");
    scanf("%d",&y);
    if(y%400==0)
    {
     printf("leap year");
    }
    else if (y%4==0)
    {
        if(y%100!=0)
        {
            printf("leap year");
        }
        else
        {
        printf("not a leap year");
        }
    }
    else
    {
         printf("not a leap year");
    }
    
    getch();
    return 0;

}