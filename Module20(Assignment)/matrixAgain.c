#include<stdio.h>

int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int lastRow = n-1;
    int lastCol = m-1;
    for (int i = 0; i < m; i++)
    {
        if (i == (m-1))
        {
            printf("%d", arr[lastRow][i]);
        } else {
            printf("%d ", arr[lastRow][i]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (i == (n-1))
        {
            printf("%d", arr[i][lastCol]);
        } else {
            printf("%d ", arr[i][lastCol]);
        }
    }
    
    return 0;
}

// input ----> 3 4
// 1 2 3 4
// 5 6 7 8
// 6 5 4 2