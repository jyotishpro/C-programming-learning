

string()
{
    char a[]={"jyotish kumar yadav and"};
    //strrev(a);

    char z[100]={" suruchi kumari yadav "};
   // strcpy(z,a);
   // printf("%s",z);

   //strcat(z,a);
   //printf("%s",z);
   /*char m[]={"jyotish"};
   char n[]={"jyotish"};

   int x=strcmp(m,n);
   if(x==0){
    printf("the number is same");
   } else{
   printf("the number is not same");
   } */


}

reverse_digit()
{
    char a[20],t;
    int i,l;
    puts("enter a string");
    gets(a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=t;
    }
    printf("reverse digit is: %s",a);
}

pallindrome()
{
    char a[20];
    int i,l;
    puts("enter a string");
    gets(a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            printf("not pallindrome");
            break;
        }
    }
    if(i==l/2){
        printf("pallindrome");
    }

}

factorial(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}

main()
{

int r;
r=factorial(5);
printf("factorial is: %d",r);
   // pallindrome();
//reverse_digit();

//string();
    getch();
}
