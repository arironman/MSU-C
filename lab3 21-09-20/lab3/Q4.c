// .4. Write a program that will read the elements of a one - dimensional array, then compares the elements and finds which are the largest two elements in a given array .

#include <stdio.h>

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

    // Comaprision of array elements
    int large1 = 0, large2 = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            large1 = arr[i];
            continue;
        }
        if (i == 1)
        {
            if (arr[i] > large1)
            {
                large2 = large1;
                large1 = arr[i];
            }
            else
            {
                large2 = arr[i];
            }
            continue;
        }

        if (arr[i] > large1)
        {
            large2 = large1;
            large1 = arr[i];
        }
        else if (arr[i] > large2)
        {
            large2 = arr[i];
        }
    }

    printf("The largest two numbers are: %d and %d", large1, large2);
}