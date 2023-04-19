#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n], cnt[20] ={0};

    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cnt[arr[i]]++ ;
    }

    for (int j = 0; j < n; j++)
    {
        if (cnt[arr[j]] != 0)
        {
            printf("%d - %d\n", arr[j], cnt[arr[j]]);
            cnt[arr[j]] = 0;
        }
        
    }
    
    

    return 0;
}