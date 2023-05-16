#include<stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int freq[26] = {0};

    for (int i = 0; i <= n; i++)
    {
        char ch;
        scanf("%c", &ch);
        freq[ch-97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        
        while (freq[i] != 0)
        {
            printf("%c", i+97);
            freq[i]--;
        }
    }
    
    return 0;
}

// input =====> 4
// deab


// input ----> 5
// egypt
