#include<stdio.h>
void main()
{
    int days;
    printf("enter days =");
    scanf("%d",&days);
    switch(days)
    {
        case 1:printf("monday");break;
        case 2:printf("tuseday");break;
        case 3:printf("wednesday");break;
        case 4:printf("thursday");break;
        case 5:printf("friday");break;
        case 6:printf("saturday");break;
        case 7:printf("sunday");break;
        default :printf("invalid input");   
    }
    getch();
}