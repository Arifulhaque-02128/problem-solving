// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include<stdio.h>
#include<string.h>

int main ()
{
    char S[1001];
    scanf("%s", S);

    int length = strlen(S);
    int i=0, j=length-1;

    int count = 0;

    while (i<=j)
    {
        if (S[i] != S[j]) 
        {
            count++;
            break;
        } else {
            i++;
            j--;
        }
        
    }

    if (count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    return 0;
}