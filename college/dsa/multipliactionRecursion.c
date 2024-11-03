// illustration of non-tail recursion to display factorial of given no

#include<stdio.h>
#include<conio.h>


int multiplication(int n) {

    if ( n == 0 ){
        return 1;
    }

    return n * multiplication( n - 1 );
}

int main(){

int n;
printf("enter your number that you want to calculate factorial of no: ");
scanf("%d",&n);

printf(" factorial is: %d", multiplication(n));

    return 0;
}