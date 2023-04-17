// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include<stdio.h>
#include<string.h>

int main ()
{
    char s[100001];
    scanf("%s", &s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 44)    // 44 ----> ASCII code of comma
        {
            s[i] = 32;     // 32 ----> ASCII code of space
        } else {
            if (s[i]>96)
            {
                s[i] = s[i] - 32;
            }
            else
            {
                s[i] = s[i] + 32;
            }
            
        }
        
        
    }

    printf("%s\n", s);
    
    return 0;
}