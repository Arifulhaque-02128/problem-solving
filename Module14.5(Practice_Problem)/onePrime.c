// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include<stdio.h>

int main ()
{
    int x;
    scanf("%d", &x);

    int cnt = 0;
    

    for (int i = 1; i <= x/2; i++)
    {
        if (x%i == 0)
        {
            cnt++;
        }
        
    }

    if (cnt>1)
    {
        printf("NO\n");
    } 

    else if (x == 1)
    {
        printf("NO\n");
    }
    
    else {
        printf("YES\n");
    }

    return 0;
}


// input ---> 7