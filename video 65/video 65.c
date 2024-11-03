
//structure concept

struct student
{
    int roll;
    int marks;
    float percentage;
    char name[10];

};


 student_data()
{

    struct student si;
    printf("enter roll, marks, percentage, name");
    scanf("%d,%d,%f,%s",&si.roll,&si.marks,&si.percentage,si.name);

    printf("%d, %d, %.2f, %s",si.roll,si.marks,si.percentage,si.name);



}

struct book
{
    int b_id;
    char b_name[10];
    float b_price;

};
book_data()
{

    struct book b1,b2,b3;
    b1.b_id=2341;
 b1.b_name[0]="Reasoning";
    b1.b_price=100;

     b2.b_id=2342;
    b2.b_name[1]="Reasoning";
    b2.b_price=200;

     b3.b_id=2343;
    b3.b_name[2]="Reasoning";
    b3.b_price=300;

    printf("%d %s %.2f \n",b1.b_id,b1.b_name,b1.b_price);

    printf("%d %s %.2f \n",b2.b_id,b2.b_name,b2.b_price);

    printf("%d %s %.2f \n",b3.b_id,b3.b_name,b3.b_price);


}

post_increment()
{
    int x=6;
    printf("%d %d %d %d %d %d ",x++,++x,x--,--x,x++,x--);
}
learn_string()
{
 char a[]={"jyotish"};
 char b[]={"kumar"};
 char c[7]={"yadav"};

 char d[20];
 printf("enter your name: ");
 scanf("%s",d);
  printf("%s  ",d);

 printf("%s  ",a);
  printf("%s  ",b);
   printf("%s  ",c);
}

void main()
{

//learn_string();
//post_increment();
book_data();

    getch();
}
