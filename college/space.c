#include <stdio.h>

void spaceremove(char str[])
{
    int j = 0;
    int i = 0;
    char copy[30];
    int copyIndex = 0;

    while (str[j] != '\0')
    {
        j++;
    }

    for (i = 0; i < j; i++)
    {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' '))
        {
            copy[copyIndex++] = str[i];
        }
    }

    copy[copyIndex] = '\0';

    printf("%s", copy);
}

int main()
{
    char str[] = "This  is  a          test  string.";
    spaceremove(str);
    return 0;
}
