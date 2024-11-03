

lcm()
{
    int x,y,i;

    //input
    printf("enter 1st no: ");
    scanf("%d",&x);

    //input
    printf("enter 2nd no: ");
    scanf("%d",&y);

    //calculate lcm

    for(i=1;i<100;i++)
    {
        if(i%x==0 && i%y==0){
            printf("LCM is: %d",i);
            break;

        }
    }
}


lcm1()
{
    int x,y,i;

    //input
    printf("enter 1st no: ");
    scanf("%d",&x);

    //input
    printf("enter 2nd no: ");
    scanf("%d",&y);

    //calculate lcm

    for(i=x>y?x:y;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0){
            printf("LCM is: %d",i);
            break;

        }
    }
}
hcf()
{
    int a,b,i;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    for(i=a<b?a:b;i>0;i--)
    {
        if(a%i==0 && b%i==0){
            printf("HCF is: %d",i);
            break;
        }
    }
}

armstrong()
{
    int a,b,c,d,x,y,z;
    printf("enter a number: ");
    scanf("%d",&x);

    a=x%10;
    y=x/10;

    b=y%10;
    z=y/10;




    c=(a*a*a)+(b*b*b)+(z*z*z);

    if(x==c){
        printf("this is armstrong no");
    }
    else{
        printf("this is not armstrong no");
    }

}
armstrong_with_loop()
{

    int x,p,d,s=0;
    printf("enter a number: ");
    scanf("%d",&x);
    d=x;
    while(x!=0)
    {
        p=x%10;
        s=s+(p*p*p);
        x=x/10;
    }
    if(d==s){
        printf("%d is armstrong",d);
    }
    else{
        printf("%d is not armstrong",d);
    }
}
find_armstrong_zero_to_one_thousand()
{
    int i,p,s=0,a[1001],x,y,z,aa,b,c;
    for(i=1;i<1000;i++)
    {
        a[i]=i;


    aa=a[i]%10;
    y=a[i]/10;

    b=y%10;
    z=y/10;




    c=(aa*aa*aa)+(b*b*b)+(z*z*z);
        if(a[i]==c){
        printf("%d is armstrong \n",a[i]);
    }

    }
}
sum_of_digits()
{
    int a,s=0,i,x;
    printf("enter a number: ");
    scanf("%d",&a);
    while(a!=0)
    {
        x=a%10;
        s=s+x;
        a=a/10;
    }
    printf("sum of digits is: %d",s);
}
highest_common_factor()
{
    int x,y,t,s=0;

for(x=1;x<1000;x++)
{
y=x;
s=0;
    while(y!=0)
    {

    t=y%10;
    y=y/10;
    s=s+(t*t*t);
    }

    if(x==s){
        printf("%d ",s);
    }


}




}
void main()
{
highest_common_factor();
   //sum_of_digits();
    //find_armstrong_zero_to_one_thousand();
    //armstrong_with_loop();
    //armstrong();
    //hcf();

   // lcm1();


    //lcm();
    getch();
}
