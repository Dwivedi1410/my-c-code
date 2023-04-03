#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character you want to check = ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        printf("entered character is alphabet\n");
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='0'||ch=='U')
        {
            printf("entered character is a vowel");
        }
        else
        {
            printf("entered character is consonent"); 
        }
    }
    else
    {
        printf("entered character is not an alphabet");
    }
    getch();

}