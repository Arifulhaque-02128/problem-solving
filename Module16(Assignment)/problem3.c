#include<stdio.h>


int count_before_zero(int arr[], int size){

    int cnt = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        else
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

    int count = count_before_zero(arr, n);

    printf("%d\n", count);
    
    return 0;
}




// input ---> 5
// 1 2 4 0 5
