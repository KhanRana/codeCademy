#include <stdio.h>

int main(void)
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13,
                 14, 15, 16, 17, 20, 22, 26, 28, 29};
    int arr2[100];

    // Code for Checkpoint 1 goes here

    for (int i = 0; i < 20; i++)
    {
        printf("%i\n", arr[i]);
    }
    // Code for Checkpoint 2 goes here
    for (int i = 0; i < 100; i++)
    {
        arr2[i] = i + 4;
    }

    // mutidimensional arrays

    // Checkpoint 1 code goes here.
    int arr[9][9];

    // Checkpoint 2 code goes here.
    // int matrix[3][3] = {{2, 9, 11}, {3, 1, 4}, {8, 3, 1}};

    // summing multidimensional arrays
    int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
    int sum = 0;

    // Checkpoint 1 code goes here.
    printf("%i", matrix[3][1]);

    // Checkpoint 2 code goes here.
    int rowsNumber = sizeof(matrix) / sizeof(matrix[0]);
    int columnsNumber = sizeof(matrix[0]) / sizeof(int);

    printf("%i", rowsNumber);
    printf("%i", columnsNumber);

    for (int i = 0; i < rowsNumber; i++)
    {
        for (int j = 0; i < columnsNumber; j++)
        {
            sum += matrix[i][j];
        }
    }
}