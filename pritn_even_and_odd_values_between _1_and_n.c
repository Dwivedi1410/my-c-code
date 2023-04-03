#include<stdio.h>
void main()
{
    int n,i,se=0,so=0;
    printf("enter the value of n =");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
      if(i%2==0)
      {
        //printf("%d is an even number \n",i);
        se=se+i;
      }
      else
      {
       // printf("%d is an odd number \n",i);
        so=so+i;
      }
    }
    printf("sum of even numbers between 1 to n is %d \n",se);
    printf("sum of odd numbers between 1 to n is %d",so);
  
}