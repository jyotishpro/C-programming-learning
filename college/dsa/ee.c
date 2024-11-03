#include<stdio.h>

float intrest(int amount , int age){
float intrest;
if(amount>=10000){
    if(age>=40){
        intrest=(amount*5)/100;
    }
    else{
     intrest=(amount*3)/100;

    }
}
else{
    if(age>=40){
     intrest=(amount*3)/100;
    }
    else{
      intrest=(amount*2)/100;
    }
}
return intrest;
}

int main(){
int amount,age;
printf("enter amount:");
scanf("%d",&amount);
printf("enter age: ");
scanf("%d",&age);
printf(" intrest is:%f ",intrest(amount,age));

    return 0;
}