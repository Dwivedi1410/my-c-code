 #include<stdio.h>
 void main()
 {
    int n,n1,rem,num=0;
    printf("enter the number you want to check palandrome or not =");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        rem=n%10;
        num=(num*10)+rem;
        n=n/10;
    }
    printf("reverse of a number is = %d \n",num);
    if(num==n1)
    {
        printf("palandrome number");
    }
    else
    {
        printf("not a palandrome number");
    }
    getch();
 }