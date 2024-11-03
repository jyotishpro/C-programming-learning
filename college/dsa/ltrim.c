#include<stdio.h>
#include<string.h>

char* ltrim(char str[]){
    int n,i,j,k;
    for(n=0;str[n]!=NULL;n++);
    printf("%d",n);
    for(i=0;i<n;i++){
        if(str[i]!=' '){
            break;
        }
    }
for(j=0;j<i;j++){
    for(k=j;k<n;k++){
        str[k]=str[k+1];
    }
    i--;
    j--;
    n--;
}
printf("%s\n",str);
printf("%d\n",n);
    printf("%d",i);
    return str;

}
int main(){
char str[]="        jyotish kumar";
ltrim(str);
    return 0;
}