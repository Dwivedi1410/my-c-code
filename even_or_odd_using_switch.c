#include<stdio.h>
void main()
{
    int n;
    printf("enter the number you want to check even or odd =");
    scanf("%d",&n);
    switch((n%2)==0)
    {
        case 0:printf("%d is odd",n);break;
        case 1:printf("%d is even",n);break;
    }
    getch();
}