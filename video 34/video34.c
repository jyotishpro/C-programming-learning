

//this is very important topic
arre()
{
    int a[5];
    printf("enter marks of five subjects: ");
    scanf("%d",&a[0]);
    scanf("%d",&a[1]);


}
arrwf()
{
    int a[5],i;
    printf("enter marks of five subjects: ");
    for(i=0;i<5;i++)
        {

        scanf("%d",&a[i]);
        //printf("%d ",a[i]);
        }
        for(i=0;i<5;i++)
        {
            printf("%d ",a[i]);
        }
   // printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);

}

pom()
{

    int a[5],tm,i;

    tm=0;
    float pr;
    printf("enter the marks of five subject: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        tm=tm+a[i];
    }
    printf("total marks of student is: %d\n",tm);
    printf("total percentage of student is: %f",pr=tm/5);


}

//wacp to calculate percentage if student got more than  seventy percentage then print congrants you are distinct  if student got more than sixty percent then print first if less than sixty then print second if he got 61 and fail in one sub then print fail

makeresult()
{
    int a[5],i,tm,c;
    float per;
    tm=0;
    c=0;

    printf("enter your marks: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        tm=tm+a[i];
        if(a[i]<33){
            c=1;
        }

    }
    per=tm/5;
    if(c==0)
    {
       printf("your total marks is: %d\n",tm);
       printf("you have passed your examination\n");
       printf("your total percentage is: %f\n",per);

    }
    else
    {
        printf("you have failed your examination\n");
    }
    if(c==0)
    {
      if(per>70)
     {
         printf("congrats you are distinct");
     }
     else if(per>61)
     {
         printf("your division is first");
     }
     else if(per>45)
     {
         printf("your division is second");
     }
     else
     {
         printf("your division is third");
     }
    }

}


void main()
{

    //arre();
    //arrwf();
   // pom();
   makeresult();

    getch();
}
