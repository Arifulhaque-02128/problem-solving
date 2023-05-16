#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr2[n];

    for (int i = 0; i <= n/2; i=i+1)
    {
        arr2[2*i] = arr[i];
        arr2[(2*i)+1] = arr[n-1-i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i==(n-1))
        {
            printf("%d", arr2[i]);
        } else {
            printf("%d ", arr2[i]);
        }
    }
    
    
    return 0;
}

// input ---> 5
// 1 2 3 4 5