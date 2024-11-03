

 switchcase()
{
    int ch;
 int a,b,c;
    printf("press 1, for addition\n");
    printf("press 2, for addition\n");
    printf("press 3, for addition\n");
    printf("enter your choice:\n ");

    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        {


            printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a+b;
              printf("addition is: %d",c);


              break;
        }
    case 2:
        {


            printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a-b;
              printf("subtraction is: %d",c);

              break;
        }
    case 3:
        {



            printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a*b;
              printf("multiplication is: %d",c);

              break;
        }
    default:
        {
            printf("wrong input");
        }
    }



}

whle()
{
    while(1)
    {

    int ch;
    int a,b,c;

    printf("press 1, for addition\n");
    printf("press 2, for addition\n");
    printf("press 3, for addition\n");
    printf("press 4 for exit\n");
    printf("enter your choice:\n ");

    scanf("%d",&ch);
        switch(ch)
    {
    case 1:
        {


            printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a+b;
              printf("addition is: %d\n",c);


              break;
        }
    case 2:
        {


            printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a-b;
              printf("subtraction is: %d\n",c);

              break;
        }
    case 3:
        {



            printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a*b;
              printf("multiplication is: %d\n",c);

              break;
        }
    case 4:
        {
            exit(0);
        }
    default:
        {
            printf("wrong input\n");
        }
    }

    }
}
add()
{
    int a,b,c;
                printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a+b;
              printf("addition is: %d\n",c);


}
sub()
{
   int a,b,c;
            printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a-b;
              printf("subtraction is: %d\n",c);
}
mul()
{
   int a,b,c;
                printf("enter the first value\n");
            scanf("%d",&a);
             printf("enter the second value\n");
             scanf("%d",&b);
              c=a*b;
              printf("multiplication is: %d\n",c);


}

    agwws()
    {


    int ch;


    printf("press 1, for addition\n");
    printf("press 2, for subtraction\n");
    printf("press 3, for multiplication\n");
    printf("press 4 for exit\n");
    while(1)
{
    printf("enter your choice:\n ");

    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        {
            add();
            break;
        }
    case 2:
        {
           sub();
           break;
        }
        case 3:
        {
            mul();
            break;
        }
        case 4:
            {
                exit(0);
            }
        default:
            {
                printf("please enter correct choice\n");
            }

    }

}
}

void main()
{
    agwws();
   // switchcase();

   //whle();


    getch();
}
