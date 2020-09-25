// 2. Create a structure of client that store information of client and display information of client.Store information of atleast 5 clients.[Use structure array]

#include <stdio.h>

struct Client
{
    int client_id;
    char name[50];
    int age;
    char gender[10];
};

void main()
{
    int records;
    printf("Enter the number of Client records u want to enter: ");
    scanf("%d", &records);

    //  creating array structure of client structure
    struct Client obj[records];

    //  taking data from user about every structure
    for (int i = 0; i < records; i++)
    {
        printf("\n\n\t\t\t\t\tEnter the Details of Client %d", i + 1);
        printf("\nEnter the Client Id:");
        scanf("%d", &obj[i].client_id);
        printf("Enter the Name: ");
        scanf("%s", &obj[i].name);
        printf("Enter the age: ");
        scanf("%d", &obj[i].age);
        printf("Enter the gender: ");
        scanf("%s", &obj[i].gender);
    }

    // printing data of every structure
    for (int i = 0; i < records; i++)
    {
        printf("\n\n\t\t\t\t\t\tDetails of Clients %d", i + 1);
        printf("\n\tClient Id: %d", obj[i].client_id);
        printf("\n\n\tName: %s", obj[i].name);
        printf("\n\tAge: %d", obj[i].age);
        printf("\n\tGender: %s", obj[i].gender);
        }
}