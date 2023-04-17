// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

#include<stdio.h>
#include<string.h>

int main ()
{
    char a[11], b[11];
    scanf("%s %s", &a, &b);

    int lenOfA = strlen(a);
    int lenOfB = strlen(b);

    printf("%d %d\n", lenOfA, lenOfB);
    printf("%s%s\n", a, b);

    char newString[lenOfA+lenOfB+1];

    for (int i = 0; i < (lenOfA); i++)
    {
        if (i==0)
        {
            newString[i] = b[i];
        } else {
            newString[i] = a[i];
        }
        
    }

    for (int i = 0; i <= lenOfB+1; i++)
    {
        if (i==0)
        {
            newString[i+lenOfA] = 32;
        } else if (i==1)
        {
            newString[i+lenOfA] = a[i-1];
        } else {
            newString[i+lenOfA] = b[i-1];
        }
    }
    
    printf("%s", newString);
    
    return 0;
}