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

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    

    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((arr[i] + 1) == arr[j])
            {
                cnt++;
                break;
            }
        }
        
    }

    printf("%d\n", cnt);
        
    
    return 0;
}


// input ----> 
// 8
// 1 1 3 3 5 5 7 7

// input ---> 
// 6
// 1 3 2 3 5 0


// input ---> 3
// 4 4 5