
si()
{
    int p,r,t;
    float s;
    printf("enter the principle amount: ");
    scanf("%d",&p);
    printf("enter the rate: ");
    scanf("%d",&r);
    printf("enter the time in year: ");
    scanf("%d",&t);
    s=(p*r*t)/100;
    printf("simple intrest is %f",s);
}

findgrade()
{
    int a;

    printf("enter the marks of students");
    scanf("%d",&a);



    if(a>=90 && a<=100)
    {
        printf("your grade is: A");
    }
    else if(a>=80 && a<90){
        printf("your Grade is: B");
    }
    else if(a>=70 && a<80){
        printf("your grade is: C");
    }
    else{
        printf("your grade is: D");
    }

}

marks()
{
    int m,p,c;
    float per;
    printf("enter the no of maths: ");
    scanf("%d",&m);
     printf("enter the no of physics: ");
     scanf("%d",&p);
      printf("enter the no of chemistry: ");
      scanf("%d",&c);
      per=(m+p+c)/3;
      if(per>=33){
        printf("you have passed your examination");
      }
      else{
        printf("you have failed in examination");
      }
}

calctax()
{
    int a;
    float tax;
    printf("enter the earning amount");
    scanf("%d",&a);
    if(a>2500000&&a<5000000)
    {
        tax=(a*5)/100;
         printf("your taxes is: %f",tax);
    }
    else if(a>500000&&a<2500000)
    {
        tax=(a*20)/100;
         printf("your taxes is: %f",tax);
    }
    else if(a>250000&&a<500000)
    {
        tax=(a*30)/100;
        printf("your taxes is: %f",tax);
    }
    else{
        printf("your taxes is: 0");
    }
}

findleapyear()
{
    int y;
    printf("enter year: ");
    scanf("%d",&y);
    if(y%4==0){
        printf("this is leap year");
    }
    else{
        printf("this is not leap year");
    }
}
create_string()
{
    char j[]="jyotish kumar yadav";
    printf("%s",j);

    char s[100];
    gets(s);
    printf("%d %s",strlen(s),s);
}

void main()
{

    create_string();

    //findleapyear();

    //calctax();
   // marks();
   // si();
  // findgrade();

    getch();
}
