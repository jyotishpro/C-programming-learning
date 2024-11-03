#include <stdio.h>
#include<string.h>


int main()
{

    int n = 3, i, j;
    int k=6;
    int l=13;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                printf("%d ",j);
            }
        }
            printf("\n");
            
        for (j = 1; j <= n; j++)
        {
            if (i == 2)
            {
                printf("%d ",k);
                k+=3;
            }
        }
        printf("\n");
        for (j = 1; j <= n; j++)
        {
            if (i == 3)
            {
                printf("%d ",l);
                l+=1;
            }
        }
            
            
        
    }

    return 0;
}