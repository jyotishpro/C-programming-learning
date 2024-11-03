/// illustration of tail recursion to display factorial of no 


#include<stdio.h>
#include<conio.h>

int fact( int n , int r ) {

     if( n == 0 ){
        return r;
     } else {
        fact( n-1, r*n );
     }
    
}

int main(){

int n;
printf("\n Enter any positive no: ");
scanf("%d ", &n);
printf("\n factorial of %d = %d", n, fact(n , 1));

    return 0;
}