#include<stdio.h>

int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                long long int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    long long int maxSum = 0;
    
    for (int i = 0; i < k; i++)
    {
        maxSum = maxSum + arr[i];
    }
    
    
    printf("%lld\n", maxSum);
    
    return 0;
}

// input ---> 2 2
// 1 2

// input =====> 3 3
// 1 2 3