// 3. Write a Program to Count Number of Digits in an Integer 

#include<stdio.h>

void main()
{
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    int count = 0;
    while (number != 0)
    {
        number = number/10;
        count++;
    }
    printf("The number of digits is: %d", count);
}