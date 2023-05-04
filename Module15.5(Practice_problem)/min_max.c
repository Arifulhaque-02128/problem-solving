// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G


#include<stdio.h>
#include<limits.h>

void min_max(int ar[], int size){

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }

        if (ar[i] < min)
        {
            min = ar[i];
        }
    }

    printf("%d %d\n", min, max);

    return;
    
}

int main ()
{
    int x;
    scanf("%d", &x);

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }



    min_max(arr, x);
    
    return 0;
}


// input ---> 5
// 10 13 95 1 3