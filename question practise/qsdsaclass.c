#include <stdio.h>
#include <string.h>

void merge(char st1[], char st2[])
{
    char st3[60];
    int i, j;

    for (i = 0; st1[i] != '\0'; i++)
    {
        st3[i] = st1[i];
    }

    st3[i] = ' ';
    i++;  // Move to the next index after space

    // Copy second string into st3
    for (j = 0; st2[j] != '\0'; j++, i++)
    {
        st3[i] = st2[j];
    }

    // Null-terminate the merged string
    st3[i] = '\0';

    // Print the merged string
    printf("Merged string: %s\n", st3);
}

int main()
{
    char st1[30];
    char st2[30];

    // Get the first string
    printf("Enter first string: ");
    fgets(st1, sizeof(st1), stdin);
    st1[strcspn(st1, "\n")] = '\0';  // Remove the newline character

    // Get the second string
    printf("Enter second string: ");
    fgets(st2, sizeof(st2), stdin);
    st2[strcspn(st2, "\n")] = '\0';  // Remove the newline character

    // Call the merge function
    merge(st1, st2);

    return 0;
}
