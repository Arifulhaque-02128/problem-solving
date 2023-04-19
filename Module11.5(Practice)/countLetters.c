// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include<stdio.h>

int main ()
{
    char a;
    int freq[26] = {0};

    int i=0;

    while (scanf("%c", &a) != EOF)
    {
        freq[a-97]++;
        i++;
    }

    for (int j = 0; j < 26; j++)
    {

        if (freq[j] != 0)
        {
            printf("%c : %d\n", (j+97), freq[j] );
        }
        
    }
    
    return 0;
}