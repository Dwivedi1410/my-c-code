#include<stdio.h>
void main()
{
    int n;
    printf("enter the number from which you want to print number in reverse order =");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    getch();

}
