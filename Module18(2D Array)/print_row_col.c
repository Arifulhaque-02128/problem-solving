#include<stdio.h>

int main ()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // print 2nd row ---> idx = 1
    int r = 1;
    printf("2nd row ---> ");
    for (int i = 0; i < col; i++)
    {
        printf("%d ", arr[r][i]);
    }

    printf("\n");

    // print 4th column ----> idx = 3
    int c = 3;
    printf("4th column ---> \n");
    for (int i = 0; i < row; i++)
    {
        printf("%d\n", arr[i][c]);
    }
    
    
    return 0;
}


// input ---> 3 4
// 1 0 0 2
// 0 1 0 5
// 0 0 1 3