#include<stdio.h>
int main()
{
    double a,b,c;
    printf("enter the first side = ");
    scanf("%lf",&a);
    printf("enter the second side =");
    scanf("%lf",&b);
    printf("enter the thired side =");
    scanf("%lf",&c);
     if(((b+c)>a)||((a+c)>b)||((b+a)>c))
     {
        printf("triangle is possible \n");
        if((a==b)&&(b==c)&&(c==a))
        {
            printf("equiletral triangle \n");
        }
        else if((a==b)||(b==c)||(c==a))
        {
            printf("isoscles  triangle \n");
        }
        else
        {
            printf("scalen triangle");
        }
     
    }
    else
    {
        printf("not a triangle");
    }
    getch();

}