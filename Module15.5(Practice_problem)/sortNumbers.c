// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include<stdio.h>

void sorting(int arr[], int n){

    int temp;

    int asc_arr[n];
    for (int i = 0; i < n; i++)
    {
        asc_arr[i] = arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (asc_arr[j] < asc_arr[i])
            {
                temp = asc_arr[i];
                asc_arr[i] = asc_arr[j];
                asc_arr[j] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", asc_arr[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }


    return;
    
    
}

int main ()
{
    int n=3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sorting(arr, n);
    
    return 0;
}


// input ----> 3 -2 1 or -2 10 0