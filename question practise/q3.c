#include<stdio.h>
#include<conio.h>

struct student_data
{
    char name[10],subName[10];
    float marks[100];

    };


int main()
{
struct student_data sd,sd2;


    sd.subName[0]="student_name";
    sd.subName[1]="physics";
    sd.subName[2]="chemistry";
    sd.subName[3]="math";
    sd.subName[4]="bio";
    sd.subName[5]="cs";

for(int i=0;i<6;i++){
    printf("%s ",sd.subName[i]);
}


    return 0;
}
