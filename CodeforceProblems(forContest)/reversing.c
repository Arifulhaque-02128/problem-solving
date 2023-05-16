#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int zeroIdx[n], idx = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroIdx[idx] = i;
            idx++;
        }
    }

    for (int i = 0; i < idx; i++)
    {

        int k= 0, j = zeroIdx[i]-1;

        while (k<j)
        {
            int temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
            k++;
            j--;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (i == (n-1))
        {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    
    }
    
    return 0;
}


// input ----:> 7
// 1 2 0 4 0 5 6
