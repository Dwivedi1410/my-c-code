#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp;
    printf("enter the value of array =");
    scanf("%d",&n);
    printf("enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;

        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("sorted list is =");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}