
/*prime_number()
{ int count=0,prime[100],k;

    for(k=1;k<100;k++){

           int a,i,m,c=0;
   // printf("enter a number: ");
    //scanf("%d",&a);
for(i=2;i<k;i++){
    m=k%i;

    if(k%i==0){
        c=1;
        break;
    }
}
if(c==1){
} else if(c==0){
    prime[k]=k;
    count=count+1;
printf("  %d\n",prime[k]);


}
    }
    printf("  total prime number is: %d ",count);




}

linear_search()
{
    //define type
int enter_no[100],i,search_no,c=0,range,searching_arr[100];

//taking input of range
printf("Enter range: ");
scanf("%d",&range);
printf("Enter %d no: ",range);

//input number

for(i=0;i<range;i++){
    scanf("%d",&enter_no[i]);
}

//taking input of search number
printf("Enter your number that you want to search: ");
scanf("%d",&search_no);

//logic for finding number
for(i=0;i<range;i++){
    if(enter_no[i]==search_no){
      //  printf("Number is found at no %d position and your searching number is %d\n",i+1,enter_no[i]);
        searching_arr[i]=enter_no[i];
        c=c+1;

    }

}

// print if number is not found
if(c==0){
    printf("Number is not found");
}



}

void main()
{
    linear_search();

    //prime_number();


    getch();
}
*/

a
