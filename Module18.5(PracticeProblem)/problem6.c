#include<stdio.h>

int main ()
{
    int n;
    scanf("%d ", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int sumOfPrimary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sumOfPrimary = sumOfPrimary + arr[i][j];
            }
        }
    }

    int sumOfSecondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j == n-1){
                sumOfSecondary = sumOfSecondary + arr[i][j];
            }
        }
    }

    int diff = (sumOfPrimary - sumOfSecondary);

    if (diff<0)
    {
        diff = diff*(-1);
    }
    
    printf("%d\n", diff);
    
    
    return 0;
}


// input ---> 4
// 1 5 12 1
// 2 -4 6 7
// 3 8 5 9
// 3 5 23 -6