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

    int elements = row*col;
    int cnt=0;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                cnt++;
            }
        }
    }
    

    if (cnt == elements)
    {
        printf("Zero Matrix\n");
    } else {
        printf("Not Zero Matrix\n");
    }
    
    return 0;
}

// input ----> 2 3
// 0 1 0 
// 0 0 1   
// or, 
// 0 0 0 
// 0 0 0