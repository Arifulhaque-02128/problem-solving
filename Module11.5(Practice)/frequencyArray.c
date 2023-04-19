// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include<stdio.h>

int main ()
{
    int n, m;
    scanf("%d %d\n", &n, &m);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }  

    int freq[m+1];

    for (int i = 0; i <= m; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++ ;
    }
    

    for (int i = 1; i <= m; i++)
    {
        
        printf("%d\n", freq[i]);
        
    }
    
    
    return 0;
}