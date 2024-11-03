
void dynamic_memory_allocation()
{

    int *x,*t;
    x=(int *)malloc(sizeof(int));
    *x=56;
    printf("%d",*x);

    t=(int *)calloc(6,sizeof(int));
    *t=30;
    *(t+0)=21;
    *(t+1)=22;
    *(t+2)=22;
    *(t+3)=22;
    printf(" %d %d %d %d",*t,*(t+1),*(t+2),*(t+3));

    t=(int *)realloc(t,9);
    *(t+8)=45;

    free(x);
    free(t);

}

void main()
{

    dynamic_memory_allocation();


    getch();
}
