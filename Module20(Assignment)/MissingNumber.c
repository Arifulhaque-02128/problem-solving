#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    long long int sum, x1, x2, x3;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld %lld", &sum, &x1, &x2, &x3);

        long long int missingNum = sum - (x1+x2+x3);

        printf("%lld\n", missingNum);
    }
    
    return 0;
}


// input ---> 1
// 10 1 2 3

// input ----> 3
// 20 2 4 1
// 15 5 5 5
// 30 10 5 3