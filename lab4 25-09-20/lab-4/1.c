// 1. Create a structure named student which contains information of student like name, age, gender and marks1, marks2.Use this structure in your program and display information of atleast 2 Students.


#include<stdio.h>

struct Student
{
    char name[50];
    int age;
    char gender[10];
    int mark1;
    int mark2;
};

void main()
{
    int records;
    printf("Enter the number of records u want to enter: ");
    scanf("%d", &records);


//  creating array structure
    struct Student obj[records];
    
//  taking data from user about every structure
    for (int i = 0; i < records; i++)
    {
        printf("\n\n\t\t\t\t\tEnter the Details of Student %d", i+1);
        printf("\nEnter the Name: ");
        scanf("%s", &obj[i].name);
        printf("Enter the age: ");
        scanf("%d", &obj[i].age);
        printf("Enter the gender: ");
        scanf("%s", &obj[i].gender);
        printf("Enter the Marks 1:");
        scanf("%d", &obj[i].mark1);
        printf("Enter the Marks 2:");
        scanf("%d", &obj[i].mark2);


    }


// printing data of every structure
    for (int i = 0; i < records; i++)
    {
        printf("\n\n\t\t\t\t\t\tDetails of Student %d", i+1);
        printf("\n\n\tName: %s", obj[i].name);
        printf("\n\tAge: %d", obj[i].age);
        printf("\n\tGender: %s", obj[i].gender);
        printf("\n\tMarks 1: %d", obj[i].mark1);
        printf("\n\tMarks 2: %d", obj[i].mark2);
    }
}