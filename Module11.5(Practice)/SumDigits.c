// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include<stdio.h>

int main ()
{
    int n;
    scanf("%d\n", &n);
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }

    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + (arr[j]-48);
    }

    printf("%d\n", sum);
    
    
    return 0;
}