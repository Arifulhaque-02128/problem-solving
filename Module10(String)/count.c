// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include<stdio.h>
#include<string.h>


int main ()
{
    char s[1000001];

    scanf("%s", &s);

    int sum = 0;

    for (int i = 0; i < strlen(s); i++)
    {

        int digit = s[i] - 48;
        sum = sum + digit;
    }

    printf("%d\n", sum);
    
    return 0;
}