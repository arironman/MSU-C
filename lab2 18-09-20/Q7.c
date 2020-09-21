// 7. Write a program in C for multiplication of two square Matrices.

#include <stdio.h>
int main(void)
{
    //Declaring the function prototype
    void squareMatricesMultiply(int nRows, int nCols, int matrix[nRows][nCols], int matrix1[nRows][nCols]);
    void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);
    //Declaring the variables
    int rows, columns, num;
    //Taking the user-input of rows and columns
    printf("Enter the number of rows and colums you want in the array(seperated by a space):");
    scanf("%d %d", &rows, &columns);
    //Declaring the array
    int arr1[rows][columns], arr2[rows][columns];
    //Taking the user inputted elements
    printf("Enter the elements of the 1st 2Darray\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the element of the row number %d and column number %d of the array: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the 2nd 2Darray\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the element of the row number %d and column number %d of the array: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }
    //Displaying the user-inputted matrices
    printf("First matrix:\n");
    displayMatrix(rows, columns, arr1);
    printf("\nSecond matrix:\n");
    displayMatrix(rows, columns, arr2);
    //Displaying the matrix after multiplying it with a scalar
    squareMatricesMultiply(rows, columns, arr1, arr2);
    printf("\nThe above two matrices after multiplication is:\n");
    displayMatrix(rows, columns, arr1);
    return 0;
}
//Function defintion
void squareMatricesMultiply(int nRows, int nCols, int matrix[nRows][nCols], int matrix1[nRows][nCols])
{
    //Declaring the variables
    int row, column;
    //looping through matrix and multiplying each element by 2
    for (row = 0; row < nRows; row++)
    {
        for (column = 0; column < nCols; column++)
        {
            matrix[row][column] *= matrix1[row][column];
        }
    }
}
//Function definition
void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
    //Declaring the variables
    int row, column;
    //looping through the elements to display each elements
    for (row = 0; row < nRows; row++)
    {
        for (column = 0; column < nCols; column++)
        {
            printf("%5i", matrix[row][column]);
        }
        printf("\n");
    }
}
