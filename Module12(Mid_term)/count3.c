#include<stdio.h>
#include<string.h>

int main ()
{
    char s[1001];
    scanf("%s", s);

    int freq[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        freq[s[i]-97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", (i+97), freq[i]);
    }
    
    
    return 0;
}