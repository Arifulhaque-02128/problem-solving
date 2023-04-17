#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    for (int j = n+1; j >= pos+1; j--)
    {
        arr[j] = arr[j-1];
    }

    arr[pos] = val;

    for (int k = 0; k < n+1; k++)
    {
        printf("%d ", arr[k]);
    }
    
    
    
    return 0;
}