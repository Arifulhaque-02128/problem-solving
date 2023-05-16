#include<stdio.h>

int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int group = n/k;
    int rem = n%k;

    if (n<k)
    {
        k=n;
    }
    

    for (int i = 0; i < group; i++)
    {

        int j=1;
        int min = arr[(i*k)];
        while ( j<k )
        {
            if(min>arr[(i*k)+j]){
                min = arr[(i*k)+j];
            }
            // if (j==(k-1))
            // {
            //     if (i==(group-1))
            //     {
            //         printf("%d", min);
            //         break;
            //     } else {
            //         printf("%d ", min);
            //     }
            // }
            j++;
        } 
        printf("%d ", min);
    }

    if (rem>0)
    {
        int min = arr[n-rem];
        for (int i = (n-rem+1); i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        printf("%d", min);
        
    }
    
    
    
    return 0;
}


// input ---> 8 3
// 4 -1 2 3 5 0 2 7

// input ----> 8 4
// 4 -1 2 3 5 0 2 7


// input ----> 3 8
// 1 2 4