void jyotish()
{
    printf("hello jyotish\n");
    int x,y,z;
    printf("%d",&x);
    int a,b,c;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("addition is %d\n",c);
    x=5;
    y=5;
    z=x+y;
    printf("%d\n",z);
}
void add(int a, int b) //formal argumennts //function definition
{
    int c;
    c=a+b;
    printf("addition is %d\n",c);
}
int adds(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
void main()
{
    int m,n,p;
    printf("enter 2 no");
    scanf("%d%d",&m,&n);
    p=adds(m,n);
    printf("addition is %d\n",p);
    int x, y;
    printf("enter 2 numbers:");
    scanf("%d%d",&x,&y);
    add(x,y);//actual arguments function calling
    //
    printf("hello friends\n");
    jyotish();


    getch();
}
