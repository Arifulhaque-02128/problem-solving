#include<stdio.h>

void printNumber(int arr[], int n, int i){

    if(i == n) return;

    printNumber(arr, n, i+1);

    if (i%2 == 0)
    {
        if (i==0)
        {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }

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

    printNumber(arr, n, 0);
    
    return 0;
}


// input ---> 4
// 1 4 2 7