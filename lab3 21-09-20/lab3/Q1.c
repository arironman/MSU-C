// 1. Write a program to make a simple calculator using switch case.

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


void main()
{
    while (true)
    {
        printf("\n Press 0 to Close the Program \n Press 1 for addition \n Press 2 for Subtraction \n Press 3 for multiplication \n Press 4 for division \n Press 5 to Exponents calculation \n Press 6 for floor division \n Enter ur choice: ");
        int choice;
        scanf("%d", &choice);
        int num1, num2;

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            printf("Enter number 1: ");
            scanf("%d", &num1);
            printf("Enter number 2: ");
            scanf("%d", &num2);
            printf("The sum of the numbers is: %d", num1 + num2);
            break;

        case 2:
            printf("Enter number 1: ");
            scanf("%d", &num1);
            printf("Enter number 2: ");
            scanf("%d", &num2);
            printf("The diffrence of the numbers is: %d", num1 - num2);
            break;

        case 3:
            printf("Enter number 1: ");
            scanf("%d", &num1);
            printf("Enter number 2: ");
            scanf("%d", &num2);
            printf("The product of the numbers is: %d", num1 * num2);
            break;

        case 4:
            printf("Enter number 1: ");
            scanf("%d", &num1);
            printf("Enter number 2: ");
            scanf("%d", &num2);
            printf("The division of the numbers is: %d", num1 / num2);
            break;

        case 5:
            printf("Enter base: ");
            scanf("%d", &num1);
            printf("Enter power: ");
            scanf("%d", &num2);
            int power = pow(num1, num2);
            printf("The Exponentail of the numbers is: %d", power);
            break;

        case 6:
            printf("Enter number 1: ");
            scanf("%d", &num1);
            printf("Enter number 2: ");
            scanf("%d", &num2);
            int result = floor(num1 / num2);
            printf("The floor division of the numbers is: %d", result);
            break;

        default:
            printf("Invalid Credentails");
            break;
        }
        printf("\n \n #################################################################\n\n");
    }
}