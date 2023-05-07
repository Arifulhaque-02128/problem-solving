#include<stdio.h>


void printArray(int arr[], int size, int i){
    if (i == size) return;

    printf("%d\n", arr[i]);

    printArray(arr, size, i+1);
    
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


    printArray(arr, n, 0);
    
    return 0;
}


// intput -----> 5
// 10 20 30 40 50