

int main()
{
    int a =6;
    int sum =0;
    int i;
    for(i = 1; i<=a; i++){
        if(a % i == 0){
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}
