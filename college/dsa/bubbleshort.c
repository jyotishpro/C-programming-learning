#include<stdio.h>

void bubbleShort(int arr[], int n) {
int temp;
int swapped;
int i,j;
i=0;
do
{

swapped=0;
j=0;
do
{
    if (arr[j]>arr[j+1])
    {
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;

swapped=1;
    }

j++;
} while (j<n-i-1);

i++;
} while (swapped);


for (int i = 0; i < n; i++)
{
printf("%d ",arr[i]);
}

      
}

int main() {
    int arr[5]={4,3,56,2,4};
    int n=5;
    bubbleShort(arr,n);
    return 0;


    
}