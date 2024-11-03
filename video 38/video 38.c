
table()
{
    int i,n;
    int a[10];
    printf("enter a no: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        a[i]=n*i;
        printf(" %d\n ",a[i]);
    }
}

whle()
{
    int i=0;
    while(i<5)
    {
        printf("helo\n");
        i++;
    }
}
whle1()
{
    int a=6;
    while(a>2)
    {
        printf("hello  ");
        a=a-2;
    }
}
whle2()
{
    int a=2;
    while(a<8)
    {
        printf("hello");
        a=a+2
    }
}

whle3()
{
    int a=1
    while(a!=8)
    {
        printf("hello")
        a++;
    }
}
dwhle()
{
    int a;
    do
    {
        printf("hello");
        a++;
    }while(a<5);
}
void main()
{
    whle3();
    //whle2();
   // whle1();
    //whle();
    //table();
    getch();
}
