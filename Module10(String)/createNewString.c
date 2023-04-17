// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include<stdio.h>
#include<string.h>

int main ()
{
    char S[1000];
    char T[1000];

    scanf("%s", &S);
    scanf("%s", &T);

    int lenOfS = strlen(S);
    int lenOfT = strlen(T);

    printf("%d %d\n", lenOfS, lenOfT);

    printf("%s %s\n", S, T);
 
    return 0;
}