#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    long long int low, high;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &low, &high);

        if (low>high)
        {
            long long int temp = high;
            high = low;
            low = temp;
        }
        

        long long int sum = (high*(high+1))/2 - (low*(low-1))/2 ;

        printf("%lld\n", sum);
        
    }
    
    return 0;
}

// input ----> 4
// 3 6
// 2 11
// 4 16
// 7 17