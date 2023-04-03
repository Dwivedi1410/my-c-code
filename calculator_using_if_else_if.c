#include<stdio.h>
void main()
{
    double a,b,A,S,M,D,Y,x;
    printf("enter the value one = ");
    scanf("%lf",&a);
    printf("enter the value of second number = ");
    scanf("%lf",&b);
    printf("you want to do =[press 1 for addition][press 2 for subtration][press 3 for multiplication][press 4 for division][press 5 for modulus] =");
    scanf("%lf",&x);
    if(x==1)
    {
        A=a+b;
        printf("%lf",A);
    }
    else if(x==2)
    {
        S=a-b;
        printf("%lf",S);
    }
    else if(x==3)
    {
        M=a*b;
        printf("%lf",M);
    }
    else if(x==4)
    {
        D=a/b;
        printf("%lf",D);
    }
    else if(x==5)
    {
       
        Y=a%b;
        printf("%lf",Y);

    }

    getch();


}