// 4.Check and Print output of following Program.


#include<stdio.h>

void salaryhike(int *var, int b)
{
    *var = *var + b;
    b = b + 10;
}

int main()
{
    int salary = 0, bonus = 0;
    printf("Enter the employee current salary:");
    scanf("%d", &salary);
    printf("Enter bonus:");
    scanf("%d", &bonus);
    salaryhike(&salary, bonus);
    printf("Final salary: %d\n", salary);
    printf("Final Bonus: %d", bonus);
    return 0;
}