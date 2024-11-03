// ullustraiton of non-tail to display sum of an natural no upto given no>

#include<stdio.h>
#include<conio.h>

int sum(int n){
    if(n == 1){
        return 1;
    }

    return n + sum( n-1 );
}

int main() {

int n;
printf("enter a natural no:");
scanf("%d",&n);
printf("sum of n natural no is: %d",sum(n));

    return 0;
}