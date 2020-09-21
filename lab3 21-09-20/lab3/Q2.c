// 2. Write a program in which the user to type his own ID, if the ID is valid it will ask him to enter his password, if the password is correct the program will print the name of the user, otherwise, the program will print Incorrect Password and if the ID does not exist, the program will print Incorrect ID.[Use Nested Switch case] 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void main()
{
    int id[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char pass[10][5] = { {'p', 'a', 's', 's', '1'},
                         {'p', 'a', 's', 's', '2'},
                         {'p', 'a', 's', 's', '3'},
                         {'p', 'a', 's', 's', '4'},
                         {'p', 'a', 's', 's', '5'},
                         {'p', 'a', 's', 's', '6'},
                         {'p', 'a', 's', 's', '7'},
                         {'p', 'a', 's', 's', '8'},
                         {'p', 'a', 's', 's', '9'},
                         {'p', 'a', 's', 's', '0'}
    };

    int user_id;
    printf("Enter the id: ");
    scanf("%d", &user_id);
    bool id_matched = false;
    int index;
    for (int i = 0; i < 10; i++)
    {
        if (id[i] == user_id)
        {
            id_matched = true;
            index = i;
            break;
        }
    }

    if (!id_matched)
    {
        printf("Invalid Id");
        exit(0);
    }

    char password[5];
    printf("Enter your password(Pawword must be of 5 character): ");
    scanf("%s", &password);
    for (int i = 0; i < 5; i++)
    {
        if (pass[index][i] != password[i])
        {
            printf("Password Do not match, Try Again! ");
            exit(0);
        }
    }

    printf("\nWelcome Sir all Details are Successfully matched");
}