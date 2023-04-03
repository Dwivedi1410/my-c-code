#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("enter the marks of first subject = ");
    scanf("%d",&a);
    printf("enter the marks of second subject = ");
    scanf("%d",&b); 
    printf("enter the marks of thired subject = ");
    scanf("%d",&c); 
    printf("enter the marks of fourth subject = ");
    scanf("%d",&d); 
    printf("enter the marks of fifth subject = ");
    scanf("%d",&e);
    f=a+b+c+d+e;
    printf("total marks obtained are = %d \n",f);
    g=f/5;
    printf("percentage obtained are =%d \n",g);
    if(g>90 && g<100)
    {
        printf("a grade");
    } 
    else if(g>80 && g<=90)
    {
        printf("grade b");
    }
    else if(g>70 && g<=80)
    {
        printf("garde c");
    }
    else if(g>60 && g<=70)
    {
        printf("grade d");
    }
    getch();
    return 0;
}