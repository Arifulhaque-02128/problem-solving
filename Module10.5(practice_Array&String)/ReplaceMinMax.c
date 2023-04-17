// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

#include<stdio.h>
#include<limits.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int min = INT_MAX;
    int minPos;
    int max = INT_MIN;
    int maxPos;

    for (int j = 0; j < n; j++)
    {
        if (ar[j]>max)
        {
            max = ar[j];
            maxPos = j;
        }

        if (ar[j]<min)
        {
            min = ar[j];
            minPos = j;
        }
        
        
    }

    ar[maxPos] = min;
    ar[minPos] = max;

    for (int k = 0; k < n; k++)
    {
        printf("%d ", ar[k]);
    }
    
    
    
    return 0;
}