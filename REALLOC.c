#include<stdlib.h>
#include<stdio.h>
void main()
    {
        int i,n,*p,n1;
        printf("enter memory size=");
        scanf("%d",&n);
        p=(int*)malloc(n*sizeof(int));
        if(p==NULL)
        {
            printf("error:memory not allocated");
        }
        else
        {
            printf("memory allocation is successful    ");
            for(i=0;i<n;i++)
            {
                printf("%u      ",(p+i));
                scanf("%d",(p+i));
            }
            for(i=0;i<n;i++)
            {
                printf("%d      ",*(p+i));
                //scanf("%d",(p+i));
            }

            printf("enter new size");
            scanf("%d",&n1);
            p=realloc(p,n1);
            for(i=0;i<n1;i++)
            {
                printf("%d   ",*(p+i));
            }

        }
    }
