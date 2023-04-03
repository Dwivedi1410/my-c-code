#include<stdio.h>
void main()
{
    int n,n1,arm=0,rem,c;
    for(n=1;n<=500;n++)
    {   n1=n;
        while(n!=0)
        {
            n=n/10;
            c++;
        }
        n=n1;
        while(n1!=0)
        {
            rem=n1%10;
            arm=arm+pow(rem,c);
            n1=n1/10;
        }
        if(n==arm)
        {
            printf("%d is an armstrong number \n",n);
        }
        arm=0;
        c=0;
        
        
    }
    getch();

    
}
