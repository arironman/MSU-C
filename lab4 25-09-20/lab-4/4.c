// 4. Create a structure of employee that store information of employee like name, id and date.Date itself is structure contains information like dd, mm, yyyy.Display information of employee.[Use nested structure]


#include<stdio.h>

struct date
{
    int dd;
    int mm;
    int yyyy;
};

struct Employee
{
    int id;
    char name[50];
    struct date d;
};

void main()
{
    int records;
    printf("Enter the number of records u want to enter: ");
    scanf("%d", &records);

    //  creating array structure
    struct Employee obj[records];

    //  taking data from user about every structure
    for (int i = 0; i < records; i++)
    {
        printf("\n\n\t\t\t\t\tEnter the Details of Employee %d", i + 1);
        printf("\nEnter the Employee Id: ");
        scanf("%d", &obj[i].id);
        printf("Enter the Name: ");
        scanf("%s", &obj[i].name);
        printf("\t\tEnter the Date of Birth \n");
        printf("Enter the date: ");
        scanf("%d", &obj[i].d.dd);
        printf("Enter the Month:");
        scanf("%d", &obj[i].d.mm);
        printf("Enter the year:");
        scanf("%d", &obj[i].d.yyyy);
    }

    // printing data of every structure
    for (int i = 0; i < records; i++)
    {
        printf("\n\n\t\t\t\t\t\tDetails of Student %d", i + 1);
        printf("\n\tEmployee Id: %d", obj[i].id);
        printf("\n\tName: %s", obj[i].name);
        printf("\n\tDate of Birth: %d-%d-%d ", obj[i].d.dd, obj[i].d.mm, obj[i].d.yyyy);
    }
}