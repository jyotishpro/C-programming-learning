#include <stdio.h>
#include <string.h>  // Include this for strcpy function

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 5

struct student_data {
    char name[NUM_STUDENTS][50];
    char subName[NUM_SUBJECTS + 1][20];  // +1 for the student name header
    float p_marks[NUM_STUDENTS];
    float c_marks[NUM_STUDENTS];
    float m_marks[NUM_STUDENTS];
    float b_marks[NUM_STUDENTS];
    float cs_marks[NUM_STUDENTS];
};

void result() {
    struct student_data sd;

    // Using strcpy to assign strings to the array elements
    strcpy(sd.subName[0], "Student Name");
    strcpy(sd.subName[1], "Physics");
    strcpy(sd.subName[2], "Chemistry");
    strcpy(sd.subName[3], "Math");
    strcpy(sd.subName[4], "Biology");
    strcpy(sd.subName[5], "CS");

    strcpy(sd.name[0], "Jyotish");
    strcpy(sd.name[1], "Raghav");
    strcpy(sd.name[2], "Bipin");
    strcpy(sd.name[3], "Rajesh");
    strcpy(sd.name[4], "Sandeep");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        sd.p_marks[i] = 100;
        sd.c_marks[i] = 100;
        sd.m_marks[i] = 100;
        sd.b_marks[i] = 100;
        sd.cs_marks[i] = 100;
    }

    // Printing the subject names
    for (int i = 0; i <= NUM_SUBJECTS; i++) {
        printf("%-12s", sd.subName[i]);
    }
    printf("\n--------------------------------------------------------------");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\n%-12s |  %.2f   |  %.2f   |  %.2f   |  %.2f   |  %.2f", 
               sd.name[i], sd.p_marks[i], sd.c_marks[i], sd.m_marks[i], sd.b_marks[i], sd.cs_marks[i]);
    }
    printf("\n--------------------------------------------------------------");
}

int main() {
    result();
    return 0;
}