#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < n; j++)
            {
                if (i==j)
                {
                    if (arr[i][j] != 1)
                    {
                        flag = 0;
                        break;
                    }
                } else if (arr[i][j] != 0){
                    flag = 0;
                    break;
                }
            }   
    }
    

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    return 0;
}


// input ----> 3
// 1 0 0
// 0 1 0
// 0 0 1

// input ----> 5
// 1 0 0 0 0
// 0 1 0 0 0
// 0 0 1 0 1
// 0 0 0 1 0
// 0 0 0 0 1