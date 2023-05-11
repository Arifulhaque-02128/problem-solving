#include<stdio.h>

int main ()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int arr1[row][col], arr2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int arr3[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}


// input ----> 2 3
// 1 2 3
// 4 5 6
// 1 3 5
// 7 9 11