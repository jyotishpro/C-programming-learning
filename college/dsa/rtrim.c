#include<stdio.h>
#include<string.h>

char* rtirm(char str[]){
int n,sp,c=0,k,l;
for(n=0;str[n]!=NULL;n++);
for(sp=n-1;sp>=0;sp--){
    if(str[sp]!=' '){
        break;
    }
    c++;
}

for(k=n-c;k<n;k++){
    for(l=k;l<n;l++){
        str[l]=str[l+1];
    }
    n--;
    k--;
}
printf("%s\n",str);

printf("%d\n",n);
printf("%d\n",c);


return str;
} 

int main(){
char str[]=" jyotish kumar          ";
rtirm(str);
    return 0;
}