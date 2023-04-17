// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

#include<stdio.h>
#include<string.h>

int main ()
{
    char s[1001];
    scanf("%s", &s);

    char rev[1001];

    int length = strlen(s);

    for (int i = 0; i <= length; i++)
    {
        rev[i] = s[length-1-i];
    }

    int comparisonValue = strcmp(s, rev);

    if (comparisonValue == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    return 0;
}