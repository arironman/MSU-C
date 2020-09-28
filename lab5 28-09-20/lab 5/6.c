// 6.Check and print output of following program.

#include<stdio.h> 

int main()
{
    int number = 50;
    int *p;
     //pointerto
    p = &number;
    //storestheaddressofnumbervariable
    printf("Address of p variable is %u\n",p);
    p=p+1;
    printf("After increment: Address of p variableis %u\n",p);
    return 0;
    }