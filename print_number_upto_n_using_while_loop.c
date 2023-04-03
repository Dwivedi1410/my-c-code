#include<stdio.h>
void main()
{
    int a=1,n;
    printf("enter the number upto which you want to print number =");
    scanf("%d",&n);
    while(a<=n)
    {   
        printf("%d\n",a);
        a++;
        
    }
    getch();
}