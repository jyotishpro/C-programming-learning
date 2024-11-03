#include <stdio.h>

char *trim(char str[])
{

    int length, i, j;
    for (length = 0; str[length] != NULL; length++)
        ;
    for (i = 0; i < length; i++)
    {
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            for (j = i; j < length; j++)
            {
                str[j] = str[j + 1];
            }
            length--;
            i--;
        }
    }
    if(str[0]==' '){
        for(i=0;i<length;i++)
        {
            str[i]=str[i+1];
        }
        length--;
    }
    if(str[length-1]==' '){
        str[length-1]=str[length];
        length--;
    }
    printf("%d",length);

    return str;
}

int main()
{
    int n;
    char str[] = "   jyotish   kumar   ";
    for( n=0;str[n]!=NULL;n++);
    printf("%d",n);
    printf("%s", trim(str));
    return 0;
}