
//header file

#include<printbro.h>

amit(int *y)
{
    printf("%d\n",*y);
    *y=7;
    printf("%d\n",*y);

}

jalks()
{
    int *a,*b,**c;
    a=&b;
    b=&a;
    c=&b;



    printf("%d",c);

}
 mann()
{
    int r=6;
    printf("%f\n",pi*r*r);
    int z=5;

    amit(&z);

    int a,*b,**c;
    a=5;
    b=&a;
    c=&b;
    printf("%u\n",**c);
    printf("%u\n",*c);
    printf("%u\n",*(&b));

    jalks();

}
void main()
{
    print("jyotihs")
    getch();
}
