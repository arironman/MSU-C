// 6. Write a program reads two integers &swaps their values.[Call by refrence]
#include<stdio.h>

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void main()
{
    int num1 , num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    // Swapping call by refrence
    swap(&num1, &num2);
    printf("The values are swapped: \nNumber 1: %d \nNumber 2: %d", num1, num2); 

}