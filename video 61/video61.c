

sum_of_digits()
{
    int a,r,s=0;
    printf("enter numbers: ");
    scanf("%d",&a);

    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    printf("sum of digits is: %d",s);

}
reverse_of_digits()
{
    int a,y,r,s;
    printf("enter numbers: ");
    scanf("%d",&a);
    printf("reverse of digit is: ");
    while(a!=0)
    {
        r=a%10;
     //   y=r;
        s=(s*10)+r;

        a=a/10;
    }
printf("%d",s);
}
pallindrome()
{
    int a,r,s,b;
    printf("enter a number: ");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        r=a%10;
        s=(s*10)+r;
        a=a/10;
    }
    if(b==s)
    {
        printf("it is pallindrome");
    }
    else{
        printf("it is not pallindrome");
    }
}

ascii()
{
    int i;
    for(i=0;i<=256;i++)
{
    printf("%d=%c   ",i,i);
}
}

int main()
{
    ascii();
    //pallindrome();
    //reverse_of_digits();
    //sum_of_digits();


    getch();
}
