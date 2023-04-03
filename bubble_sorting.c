#include<stdio.h>
void main()
{
    int a[20],i,j,temp,n;
    printf("enter the value of array =");
    scanf("%d",&n);
    printf("enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)   //no of passes
    {
        for(j=0;j<n-1-i;j++)     //comparisons
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)  //display of sorted array
    {
        printf("%d ",a[i]);
    }

}