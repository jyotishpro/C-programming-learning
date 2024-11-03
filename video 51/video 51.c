

strptn()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");N
    }
}
strwdp()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

strwos()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

strwos2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}



strwos3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
strwos4()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=5-i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for(k=1;k<=4;k++)
        {
            if(k<=i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

strwos5()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}

pone()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d ",i);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


void main()
{

pone();
//strwos5();
//strwos4();
//strwos3();
//strwos2();

//strwos();
//strwdp();
//strptn();


    getch();
}
