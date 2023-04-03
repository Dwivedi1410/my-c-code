#include<stdio.h>
void main()
{
    int i,n,*p;
    printf("enter size of memory=");
    scanf("%d",&n);
    p=(int*)malloc(n);
    if(p==NULL)
    {
        printf("error:memory not allocated");
    }
    else
    {
       printf("memory alloaction successfully created by malloc");
       for(i=0;i<n;i++)
       {
        printf("%u     ",(p+i));
       }
    }
    free(p);
}
