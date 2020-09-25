// 5. Create a structure named address contains information like city, pincode, phone.Pass this structure to function and display information in function.

#include <stdio.h>

struct Address
{
    char city[20];
    char pincode[6];
    char phone[12];
};


void Address_data(struct Address obj)
{
    printf("\n\n\t\t\t\t\t\t\t\tAddress ");
    printf("\n\n\tCity: %s", obj.city);
    printf("\n\tPincode: %d", obj.pincode);
    printf("\n\tPhone: %s", obj.phone);
}

void main()
{
    int records;
    printf("Enter the number of records u want to enter: ");
    scanf("%d", &records);

    //  creating array structure
    struct Address obj[records];

    //  taking data from user about every structure
    for (int i = 0; i < records; i++)
    {
        printf("\n\n\t\t\t\t\tEnter the Details of Student %d", i + 1);
        printf("\nEnter the City: ");
        scanf("%s", &obj[i].city);
        printf("Enter the pincode: ");
        scanf("%s", &obj[i].pincode);
        printf("Enter the phone: ");
        scanf("%s", &obj[i].phone);
    }

    // printing data of every structure
    for (int i = 0; i < records; i++)
    {
        Address_data(obj[i]);
    }
}