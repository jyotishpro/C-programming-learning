#include <stdio.h>
#include <string.h>

leftchar(char ch[],int left)
{
    int i;
    for (i = 0; ch[i] != NULL; i++)
        {

        }

    for(int j=i-left;j<i;j++){
        printf("%c",ch[j]);
    }
}

main()
{
    char ch[30];
    int left;
    printf("enter a string: \n");
    scanf("%s", ch);
    printf("enter left most char\n");
    scanf("%d", &left);
    leftchar(ch,left);
}