//  6. Write a program in C for addition of two Matrices of same size.

#include<stdio.h>

const int col, row;

void main(){
    printf("Enter the size of matrix: \n");
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);
    printf("Enter the Number of Colums: ");
    scanf("%d", &col);

    int mat1[row][col], mat2[row][col];
        
    printf("Enter the Elements of Matrix 1: ");
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("Enter the Element of index row %d and column %d: ", r, c);
            scanf("%d", &mat1[r][c]);
        }
        
    }

    printf("Enter the Elements of Matrix 2: ");
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("Enter the Element of index row %d and column %d: ", r, c);
                scanf("%d", &mat2[r][c]);
        }
    }


    printf("Matrix 1 is: \n");
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("%d ", mat1[r][c]);
        }
        printf("\n");
    }



    printf("Matrix 2 is: \n");

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("%d ", mat2[r][c]);
        }
        printf("\n");
    }




    int finalMatrix[row][col];
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            finalMatrix[r][c] = mat1[r][c] + mat2[r][c];
        }
    }


    printf("Added Matrix is: \n");

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            printf("%d ", finalMatrix[r][c]);
        }
        printf("\n");
    }
}