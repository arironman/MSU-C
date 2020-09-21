// 7. Write a program takes a year as input and finds whether a year is leap year or not .

#include<stdio.h>

void main()
{
    long year;
    printf("Enter the year: ");
    scanf("%d", &year);
    // printf(year);

    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    else if( year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    
    
    
}