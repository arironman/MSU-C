
// 1. Write a c program to check palindrome number. 

#include <stdio.h>
int main() {
    int num;
    printf("Enter an Number: ");
    scanf("%d", &num);
    int temp = num;

    
    int rev = 0, rem;
    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (num == rev)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);

    return 0;
}