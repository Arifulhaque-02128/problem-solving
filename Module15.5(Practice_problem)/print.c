// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include<stdio.h>

void print(int x){
    for (int i = 1; i <= x; i++)
    {
        if (i == x)
        {
            printf("%d", i);
        } else {
            printf("%d ", i);
        }
    }

    return;
    
}

int main ()
{

    int x;
    scanf("%d", &x);

    print(x);
    
    return 0;
}

// input ---:> 5