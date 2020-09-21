// 2. Write a program to print the multiplication table of any user input number. 

#include<stdio.h>

void main(){
    int Number;
    printf("Enter a Number to get Multiplication table: ");
    scanf("%d", &Number);
    printf("Multiplication table of the %d is: ", Number);
    int i = 1;
    while (i<11){
        printf("\n %d x %d = %d", Number, i, Number*i);
        i++;
    }
    getchar();
}