#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char fname[100],ch;
    int LC=0,UC=0,w=1,d=0;
    printf("enter file name=");
    fp=fopen(fname,"r");
    if(fp="NULL")
    {
        printf("error");
    }
    else
    {
        while(1)
        {
            ch=fget(fp);
            if(ch==-1)
            {
                break;
            }
            if(ch>='a' && ch<='z')
            {
                LC++;
            }
             if(ch>='A' && ch<='Z')
            {
                 UC++;
            }
             if(ch>=' ' || ch<='\n')
            {
                w++;
            }
             if(ch>='0' && ch<='9')
            {
                d++;
            }
        }
        printf("%d=LC, %d=UC, %d=w,%d=d",LC,UC,w,d);
        fclose(fp);
    }
}