#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("enter how many rows you want to print =");
    scanf("%d",&r);
    printf("enter how many coulubs you want to print =");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
      {
            if(i==1 || i==r || j==1 || j==c)
            {
                printf("*");
                
            }
            else if(i>=2 && i<=(r-1) && (i==j) )
            {
                printf("*");
            }
            else if(j==((c+1)-i))
            {
                printf("*");
            }
            
            else
            {
                printf(" ");
            }
      }
      printf("\n");

    }  
}

