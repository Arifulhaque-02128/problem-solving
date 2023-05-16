#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int max = 0;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        long long int x = arr[i];
        while (x%2 == 0)
        {
            x = x/2;
            cnt++;
            if (max<cnt)
            {
                max = cnt;
            }
        }
        
    }

    printf("%d\n", max);
    
    
    return 0;
}



// input ===:> 3
// 18 24 7