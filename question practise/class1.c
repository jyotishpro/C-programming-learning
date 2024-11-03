#include<stdio.h>
int main(){
    int n,l,c=0;
    printf("enter 0 no: ");
    scanf("%d",&l);
    c=c+1;
    start:
    printf("enter %d no: ",c);
    scanf("%d",&n);
    c=c+1;
    if(l<n){
        l=n;
    }
    if(c<5){
        goto start;
    }
    printf("largest one is: %d",l);
}