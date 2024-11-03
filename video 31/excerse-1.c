#include<stdio.h>
#include<conio.h>

int aor()
{
    int a;
    int b;
    int ar;

    printf("enter length of rectangle");
    scanf("%d",&a);

    printf("enter width of rectangle");

scanf("%d",&b);

ar=a*b;
printf("area of rectangle is %d",ar);

}

aoc()
{
    float r,ar;
    printf("enter radius of circle: ");
    scanf("%f",&r);
    ar=3.14*r*r;
    printf("area of circle is %f",ar);
}
voc()
{
    float h,r,v;
    printf("enter the height of cylinder: ");
    scanf("%f",&h);
    printf("enter the radius of cylinder");
    scanf("%f",&r);
    v=3.14*r*r*h;
    printf("volume of cylinder is ",v);
}

printno()
{

    int i=10;
    for(i>9;i<21;i++)
    {
        printf("%d",i);
    }
}
void main()
{
    printno();
    //voc();
    //aor();
    //c();

    getch();
}
