

fbsrs()
{
    int r,a=-1,b=1,c,i;
    printf("enter range: ");
    scanf("%d",&r);
    printf("the result is: ");
    for(i=0;i<r;i++)
    {

    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;

    }


}
fac()
{
    int n,m,i;
    printf("enter a no: ");
    scanf("%d",&n);

   m=n;
   for(i=0;i<n;i++)
   {

    n=n-1;
    m=m*n;

   }

printf("\n%d",m);


}

facofc()
{
    int a,i,s=1;
    printf("enter a number: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    printf("factorial is: %d",s);
}

gun()
{
    int a,i,s=0;
    printf("enter a no");
    scanf("%d",&a);
printf("this no is divided by");
  for(i=1;i<=a;i++)
  {
      if(a%i==0)
      {
          printf("%d + ",i);
          s=s+i;
      }
  }
  printf("= %d", s);

}

pwer()
{
    int a,b,i,p=1;
    printf("enter a cofficient: ");
    scanf("%d",&a);
    printf("\n enter power: ");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        p=p*a;
    }
    printf("result is: %d",p);
}


void main()
{
    pwer();
    //facofc();

  //  gun();
//fac();
   //fbsrs();
   getch();
}
