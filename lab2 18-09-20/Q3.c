// 3. Write a program in C to find the sum of all elements of the array.

#include<stdio.h>

int addArray(int arr[], int size){
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }
    return result;
}


void main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the Elements of Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the %d Element of Array: ", i);
        scanf("%d", &arr[i]);
    }

    int result = addArray(arr, size);
    printf("Sum of the Array is %d.", result);
}