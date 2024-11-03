#include <stdio.h>
#include<string.h>

void removespace(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    int i = 0;
    while (i < length) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            for (int j = i; j < length; j++) {
                str[j] = str[j + 1];
            }
            length--;
        } else {
            i++;
        }
    }

    printf("%s", str);
}

int main() {
    int i;
    char str[] = "                     ";
    removespace(str);
    for( i=0;i<str[i];i++);
    printf("%d",i);
    return 0;
}
