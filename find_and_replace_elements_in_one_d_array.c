#include<stdio.h>
void main()
{
   int a[10],n,i,x,y;
   printf("enter the value of n =");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("enter the value which you want to replace =");
   scanf("%d",&x);
   printf("enter the value which you want to add in replaced value =");
   scanf("%d",&y);
   for(i=0;i<n;i++)
   {
      if(a[i]==x)
      {
         a[i]=y;
      }
   }
  printf("new array will be =");
   for(i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }

}