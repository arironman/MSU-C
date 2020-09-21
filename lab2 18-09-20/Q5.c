//  5. Write a program in C to count the frequency of each element of an array.

#include <stdio.h>
#include<stdbool.h>
void main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the Elements of Array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d Element of Array: ", i);
        scanf("%d", &arr[i]);
    }

 
 
    int temp[size], count[size], index = 0;
    bool notFound = false;
    for (int i = 0; i < size; i++)
    {
        notFound = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] != temp[j])
            {
                notFound = true;
            }
            if (arr[i] == temp[j])
            {
                count[j]++;
                notFound = false;
                break;
            }
    }

    if (notFound){
        temp[index] = arr[i];
        count[index] = 1;
        index++;
    }
    

    }

    printf("All the unique elements are: \n");
    for (int i = 0; i < index; i++)
    {
        printf("%d  %d \n", temp[i], count[i]);
    }

}