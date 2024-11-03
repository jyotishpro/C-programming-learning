#include<stdio.h>

// function to extract specified no of char from given string at the position be
// specify

char* mid(char str[],int pos,int n){
    char x[20];
    int c=0;
    for(int i=pos-1;i<(pos+n-1);i++){
       x[c++]=str[i];
        
    }
    x[c]=NULL;
    return (&x);
}

int main(){

char str[50];
int pos,n;char *p;
printf("enter any string: ");
gets(str);
printf("enter position and no of character to extract from string= ");
scanf("%d %d",&pos,&n);
p=mid(str,pos,n);
printf("\n %s",p);
    return 0;
}
