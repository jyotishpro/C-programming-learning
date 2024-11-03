#include<stdio.h>
#include<conio.h>

int EvenOdd(int n) {
    if (n%2 == 0)
    {
       if( n == 2 ){
        return 2;
       } 
        return n+ EvenOdd( n - 2 );
       
    } else{
        if( n == 1 ){
            return 1;
        } 
        return n+ EvenOdd( n - 2 );
    }
    
}

int main(){
    int n;
    printf("enter the range: ");
    scanf("%d",&n);
    if( n%2 == 0) {
      
      printf("Sum of even no is: ");
     printf(" %d",EvenOdd(n) );
        
    } else{
        printf("sum of odd no is: ");
       printf(" %d",EvenOdd(n)) ;
    }
    

    return 0;
}