#include<stdio.h>

int summ(int arr[], int size, int i){
    if(i==size) return 0;

    int sum = summ(arr, size, i+1);

    return sum + arr[i];
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

    int sum = summ(arr, n, 0);

    printf("sum : %d\n", sum);

    return 0;
}


// input ----> 5
// 10 20 30 40 50
