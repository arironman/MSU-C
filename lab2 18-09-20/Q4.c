//  4. Write a program in C to print all unique elements in an array

#include<stdio.h>
#include<stdbool.h>

void main(){
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
    
    int temp[size], index = 0;
    bool added;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (temp[j] == arr[i])
            {
                added = true;
                break;
            }
            else
            {
                added = false;
            }

        }
        if (!added){
            temp[index] = arr[i];
            index++;
        }

    }
    printf("All the unique elements are: \n");
    for (int i = 0; i < index; i++)
    {
        printf("%d\n", temp[i]);
    }
    

}