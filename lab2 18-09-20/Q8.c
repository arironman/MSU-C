//  8. Write a program in C to find transpose of a given matrix

#include <stdio.h>

const int col, row;

void main()
{
    printf("Enter the size of matrix: \n");
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);
    printf("Enter the Number of Colums: ");
    scanf("%d", &col);

    int mat[row][col];

    printf("Enter the Elements of Matrix : \n");
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("Enter the Element of index row %d and column %d: ", r, c);
            scanf("%d", &mat[r][c]);
        }
    }

    printf("The Given Matrix is: \n");
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("%d ", mat[r][c]);
        }
        printf("\n");
    }

    int transMatrix[row][col];
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            transMatrix[c][r] = mat[r][c];
        }
    }

    printf("Transpose Matrix is: \n");

    for (int c = 0; c < col; c++)
    {
        for (int r = 0; r < row; r++)
        {
            printf("%d ", transMatrix[c][r]);
        }
        printf("\n");
    }
}