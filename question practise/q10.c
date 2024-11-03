#include<stdio.h>
#include<conio.h>


int main(){

char a[100];
printf("enter a string :");
scanf("%s",&a);
if((int)strlen(a)<11){
    // printf("%c%d%c",a[0],(int)strlen(a),a[(int)strlen(a)-1]);
    printf("%s",a);
}
else{
   printf("%c%d%c",a[0],(int)strlen(a)-2,a[(int)strlen(a)-1]);  
}


    return 0;
}