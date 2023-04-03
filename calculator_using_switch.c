#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,A;
    int c;
    printf("enter the value of first number =");
    scanf("%lf",&a);
    printf("enter the value of second number =");
    scanf("%lf",&b);
    printf("you want to do =[press 1 for addition][press 2 for subtraction][press 3 for multiplication][press 4 for division][press 5 for modulus]\n");
    scanf(" %d",&c);
   switch (c)
   {
        case 1: A=a+b ; printf("%lf + %lf = %lf",a,b,A) ;break;
        case 2: A=a-b ; printf("%lf - %lf = %lf",a,b,A) ;break;
        case 3: A=a*b ; printf("%lf * %lf = %lf",a,b,A) ;break;
        case 4: A=a/b ; printf("%lf / %lf = %lf",a,b,A) ;break;
        case 5: A=a%b ; printf("%lf mod %lf = %lf",a,b,A) ;break;
        default :printf("no result");break;
    }
    getch();
}