#include<stdio.h>
void main()
{
    char c;
    printf("enter the character you want to check =");
    scanf("%c",&c);
    switch((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        case 0:printf(" not an alphabet");break;
        case 1:printf("alphabet");break;
    } 
    getch();
}