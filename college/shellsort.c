#include<stdio.h>
#define true 1
#define false 0

void shell_sort(int arr[], int n){
    int swap = false, gap = n/2,i;
    

   do
   {
    do
    {
        
        for (swap=false, i = 0; i < n - gap ; i++)
        {
            if (arr[i]>arr[i+gap])
            {
                
            int temp = arr[i];
            arr[i] = arr[i+gap];
            arr[i+gap]= temp;
            swap = true;

            }
            
        }
        

    } while (swap);
    
    gap = gap/2;
   } while (gap>0);
   
   
   

}

int main(){
int arr[20],n;
printf("Enter the size of array\n");
scanf("%d",&n);
printf("\n Enter the element of array");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

shell_sort(arr,n);

printf("\n sorted list");
for (int i = 0; i < n; i++)
{
    printf("\n List [%d]", arr[i]);
}


    return 0;
}