#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x,y;
    printf("enter the value of a = ");
    scanf("%lf",&a);
    printf("enter the value of b = ");
    scanf("%lf",&b);
    printf("enter the value of c = ");
    scanf("%lf",&c);
    printf(" quadratic equation is %lfx^2 + %lfx + %lf \n",a,b,c);
    d=(b*b)-(4*a*c);
    printf("value of d is %lf",d);
    if(d>0)
    {   
        printf(" roots are real and distinct  \n ");
        x=((-b)+ sqrt(d))/(2*a); 
        y=((-b)- sqrt(d))/(2*a);
        printf("roots are x=%lf ",x);
        printf("y =%lf",y);

    }
    else if(d==0)
    {
        printf(" roots are real and equal ");
        x=(-b+ pow((d),0.5))/(2*a);
        printf("\n roots are x=%lf \n y=%lf",x,x);
    }
    else if(d<0)
    {   
        printf(" roots are imaginary \n ");
        x=(-b)+sqrt(-d)/(2*a);
        y=(-b)-sqrt(-d)/(2*a);
        printf("roots are x=%lfi \n y=%lfi",x,y);
    }
    getch();

}