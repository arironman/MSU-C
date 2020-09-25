// 6. Create a structure named distance that stores inch and feet.Display sum of two distance.


#include <stdio.h>

struct Distance
{
    int inch;
    int feet;
};

void sum(struct Distance D1, struct Distance D2 )
{
    printf("\n\n\t\t\t\t\tThe Sum of the Distance 1 and Distance 2 is: ");
    printf("\n\tInches: %d", D1.inch+D2.inch);
    printf("\n\tFeets: %d", D1.feet+D2.feet);
}

void main()
{
 
    //  creating array structure
    struct Distance obj[2];

    //  taking data from user about every structure
    for (int i = 0; i < 2; i++)
    {
        printf("\n\n\t\t\t\t\tEnter the Distance %d", i + 1);
        printf("\nEnter the inch: ");
        scanf("%d", &obj[i].inch);
        printf("Enter the feet: ");
        scanf("%d", &obj[i].feet);
        }

    // printing data of every structure
    for (int i = 0; i < 2; i++)
    {
        printf("\n\n\t\t\t\t\t\tDetails of Distance %d", i + 1);
        printf("\n\n\tInch: %d", obj[i].inch);
        printf("\n\tFeet: %d", obj[i].feet);
    }
    sum(obj[0], obj[1]);
}