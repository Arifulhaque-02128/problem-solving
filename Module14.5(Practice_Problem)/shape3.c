// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);

    int k=1, s=(n-1);

    for (int i = 1; i <= (2*n); i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
    
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        if (i<n)
        {
            k=k+2;
            s--;
        } else if (i==n)
        {
            k=(2*n)-1;
            s=0;
        } else {
            k=k-2;
            s++;
        }
        
        

        printf("\n");
        
        
    }
    
    return 0;
}

//input -----> 4