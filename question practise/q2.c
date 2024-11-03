#include <stdio.h>
#include <string.h> // Include this for strcpy function

struct student_data
{
    char name[6][50];
    char subName[6][20]; // Increased the size to hold longer strings
    float p_marks[10];
    float c_marks[10];
    float m_marks[10];
    float b_marks[10];
    float cs_marks[10];
};

int main()
{
    struct student_data sd, sd2, sd3;

    // Using strcpy to assign strings to the array elements
    strcpy(sd.subName[0], "student_name");
    strcpy(sd.subName[1], "physics");
    strcpy(sd.subName[2], "chemistry");
    strcpy(sd.subName[3], "math");
    strcpy(sd.subName[4], "bio");
    strcpy(sd.subName[5], "cs");

    strcpy(sd2.name[0], "jyotish \t");
    strcpy(sd2.name[1], "raghav \t");
    strcpy(sd2.name[2], "bipin \t");
    strcpy(sd2.name[3], "rajesh \t");
    strcpy(sd2.name[4], "sandeep \t");
    for (int i = 0; i < 5; i++)
    {
        sd3.p_marks[i] = 100;
        sd3.m_marks[i] = 100;
        sd3.c_marks[i] = 100;
        sd3.b_marks[i] = 100;
        sd3.cs_marks[i] = 100;
    }
    // Printing the subject names
    for (int i = 0; i < 6; i++)
    {
        printf("%s         ", sd.subName[i]);
    }
    printf("\n _____________________________________________________________________________________");
    for (int i = 0; i < 5; i++)
    {
        printf(" \n  %s  |  %.2f   |        %.2f  |      %.2f  |    %.2f   |   %.2f", sd2.name[i], sd3.p_marks[i], sd3.c_marks[i], sd3.m_marks[i], sd3.b_marks[i], sd3.cs_marks[i]);
    }
    printf("\n --------------------------------------------------------------------------------------");

    getch();

    return 0;
}