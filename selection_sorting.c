#include<stdio.h>
void main()
{
    int a[20],i,j,temp,min,n;
    printf("enter the value of array =");
    scanf("%d",&n);
    printf("enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
       // if(min!=i)
        
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        
    }
    printf("sorted array is =");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}