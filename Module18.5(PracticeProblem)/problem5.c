#include<stdio.h>


long long int summation(long long int arr[], int n, int i){

    if(i==n) return 0;

    long long int sum = summation(arr, n, i+1);

    return sum+arr[i];
}

int main ()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    long long int sum = summation(arr, n, 0);

    printf("%lld\n", sum);
    
    return 0;
}

// input ---> 4
// 1 4 2 7