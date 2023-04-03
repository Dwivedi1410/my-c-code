#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,b;
    printf("enter the number whose table you want to print =");
    scanf("%d",&n);
    for(a=1;a<=10;a++)
    {
        b=a*n;
        printf("%d * %d = %d\n",n,a,b);
    }
   
}