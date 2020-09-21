// 5. Write a program that will take a number as input from users to delete and delete that element from the array in case it is present or print appropriate message if not present .
#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the elements of array: ");
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the element of %d index: ", i);
        scanf("%d", &arr[i]);
    }

//  find deleting element
    bool delete = false;
    int number, position;
    printf("Enter a number to check and delete: ");
    scanf("%d", &number);
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == number)
        {
            delete = true;
            position = i;
            break;
        }
    }

    if (!delete)
    {
        printf("%d is not the element of array.", number);
        exit(0);
    }

    // shifting other elements 
    for (int i = position; i < size; i++)
    {
        arr[i] = arr[i+1];
        // arr[size] = 0;
    }

    printf("The updated array is: ");   
    for (int i = 0; i < size-1; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
    
    
}