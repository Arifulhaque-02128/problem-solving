// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
#include<stdio.h>
#include<string.h>

int main ()
{
    char a[11], b[11];
    scanf("%s %s", a, b);

    int lenOfA = strlen(a);
    int lenOfB = strlen(b);

    printf("%d %d\n", lenOfA, lenOfB);

    printf("%s%s\n", a, b);

    int temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

    return 0;
}