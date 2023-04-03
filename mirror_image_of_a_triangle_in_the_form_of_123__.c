#include<stdio.h>
void main()
{
    int r,a,b;//c=1;
   char c=65;
    printf("enter the number of rows you want to print in your pattern =");
    scanf("%d",&r);
    for(a=1;a<=r;a++)
    {
        for(b=1;b<=r;b++)
        {
            if(b<=(r-a))
            {
                printf(" ");
            }
            else
            {
               // printf("%d",c);
                printf("%c",c);
                c++;
            }
        }
       // c=1;
        c=65;
        printf("\n");
    }
}