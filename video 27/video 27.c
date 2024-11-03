#define pi 3.14
#include<stdio.h>

css()
{
    printf("%d",a);
}
 max()
{
 int x,y;
 printf("enter 1st number");

 scanf("%d",&x);
 printf("enter second no");
 scanf("%d",&y);

  if (x>y){
    printf(" result is %d",x);
  }
  else
    if (x==y){
    printf("both are same");
  }
  else
    {
    printf("result is %d",y);
  }

}

eodd()
{
    int a;
    printf("enter your no: ");
    scanf("%d",&a);
    if(a%2==0){
        printf("this is even no");
    }
    else{
        printf("this is odd no");
    }
}
threemax()
{
    int a,b,c;
    printf("enter 1st no: ");
    scanf("%d",&a);


    printf("enter 2nd no: ");
    scanf("%d",&b);
    printf("enter 3rd no: ");
     scanf("%d",&c);

     if(a>b && a>c)
     {
         printf("%d is greather than all three no",a);
     }
    else if(b>a && b>c)
     {
         printf("%d is greather than all three no",b);
     }
     else{
        printf("%d is greater than all three no",c);
     }
}

vowel()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("this is vowel");
    }
    else{
        printf("this is not vowel");
    }
}
void main()
{

    css();
    //vowel();
    //threemax();
    //max();

    //eodd();



    getch();
}
