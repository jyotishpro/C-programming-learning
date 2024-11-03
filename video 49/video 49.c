

arrm()
{
    int i,j,a[10][10],b[10][10],c[10][10],row,column;
    printf("enter a row: ");
    scanf("%d",&row);
    printf("enter a column: ");
    scanf("%d",&column);
    printf("enter 1st 3x3 matrix: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 2nd matrix: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("addition of two matrices is: ");
    for(i=0;i<row;i++)
    {
        printf("\n");
        for(j=0;j<column;j++)
        {
            printf("%d ",c[i][j]=a[i][j]+b[i][j]);
        }
    }
}

void main()
{
   arrm();




   getch();
}
