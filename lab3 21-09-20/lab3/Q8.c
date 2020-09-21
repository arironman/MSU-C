// 8. Write a Program to Find the Biggest of 3 Numbers using function

#include<stdio.h>

    int biggest(int num1, int num2, int num3)
{
    if (num1>num2 && num1>num3) 
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
    
}

void main()
{
    int num1, num2, num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    int big = biggest(num1, num2, num3);
    printf("The biggest number is %d", big);
}