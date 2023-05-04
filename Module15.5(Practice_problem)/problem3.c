#include<stdio.h>

int odd_count(int *arr, int n){
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]%2) != 0)
        {
            cnt++;
        }
    }

    return cnt;
    
}

int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = odd_count(arr, n);

    printf("%d", count);
    
    
    return 0;
}