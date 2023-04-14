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

    if ((n-1)%2 == 0)
    {
        for (int j = n-1; j >= 0; j = j-2){
            printf("%d ", arr[j]);
        }
    
    } else{
        for (int j = n-2; j >= 0; j = j-2){
            printf("%d ", arr[j]);
        }
    }
    
    
    return 0;
}