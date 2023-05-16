#include<stdio.h>
#include<stdlib.h>

int even_hate_odd(int arr[], int n){
    int evenCnt = 0;
    int oddCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 != 0)
        {
            oddCnt++;
        } else {
            evenCnt++;
        }
        
    }

    int diff = abs((evenCnt - oddCnt));

    if (evenCnt == oddCnt)
    {
        return 0;
    }
    
    if(evenCnt > oddCnt){
        int cnt = 0;
        for (int i = 0; i < n ; i++)
        {
            if (arr[i]%2 == 0)
            {
                arr[i] = arr[i] + 1;
                evenCnt = evenCnt - 1;
                oddCnt = oddCnt + 1;
                diff = abs(evenCnt - oddCnt);
                cnt++;
                if (diff == 0)
                {
                    return cnt;
                    break;
                }
            }
        }
        return -1;
    }

    if(oddCnt > evenCnt){
        int cnt = 0;
        for (int i = 0; i < n ; i++)
        {
            if (arr[i]%2 != 0)
            {
                arr[i] = arr[i] + 1;
                evenCnt = evenCnt + 1;
                oddCnt = oddCnt - 1;
                diff = abs(evenCnt - oddCnt);
                cnt++;
                if (diff == 0)
                {
                    return cnt;
                    break;
                }
            }
        }

        return -1;
    }
    
}

int main ()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int result = even_hate_odd(arr, n);

        printf("%d\n", result);
        
    }
    
    return 0;
}

// input ----> 3
// 4
// 1 2 3 4
// 4
// 1 1 1 1
// 3
// 1 2 3
