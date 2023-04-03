#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char fname[100],data[100],ch;
    int i=0;
    printf("enter file name=");
    gets(fname);
    printf("enter string=");
    gets(data);
    if(fp==NULL)
    {
        printf("error");
    }
    else
    {
        while(data[i]=NULL)
        {
            fputs(data[i],fp);
            i++;
        }
        fclose(fp);
        fp=fopen(fname,"r");
        while(1)
        {
            ch=fgetc(fp);
            if(ch==-1)
            {
                break;
            }
            printf("%c",ch);
        }
    }
    fclose(fp);
}