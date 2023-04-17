#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int midIdx = n/2;

    for (int j = 0; j < midIdx; j++)
    {
        int temp = arr[j];
        arr[j] = arr[n-1-j];
        arr[n-1-j] = temp;
    }


    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    
    
    
    return 0;
}