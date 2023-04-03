#include<stdio.h>
void main()
{
    char n;
    char *p,i;
    printf("enter size of memory=");
    scanf("%d",&n);
    p=(char*)calloc(n,sizeof(char));
    if(p==NULL)
    {
        printf("error:memory not allocated");
    }
    else
    {
       printf("memory alloaction successfully created by malloc");
       for(i='a';i<'e';i++)
       {
         printf("%u   ",(p+i));
       }
       for(i=0;i<n;i++)
       {
         scanf("%c",(p+i));
       }
       for(i=0;i<n;i++)
       {
         printf("%c  ",*(p+i));
       }
       
    }
    free(p);
     for(i='a';i<'e';i++)
       {
         printf("%c ",*(p+i));
       }

}