#include<stdio.h>
void main()
{
    int n,a,b=1,sum=0;
    printf("how many numbers you want to add =");
    scanf("%d",&n);
    while(b<=n)
    {
        printf("enter the %d number =",b);
        scanf("%d",&a);
        sum=sum+a;
        b++;
    }
    printf("%d",sum);
    getch();
}