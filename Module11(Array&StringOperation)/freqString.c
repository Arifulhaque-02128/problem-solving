#include<stdio.h>
#include<string.h>

int main ()
{
    char word[101];
    scanf("%s", word);

    int cnt[26] = {0};
    int valueOfAlphabet;

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] < 97)
        {
            word[i] = word[i] + 32;
        }

        valueOfAlphabet = word[i] - 97;

        cnt[valueOfAlphabet]++ ;
        
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", (i+97), cnt[i]);
            cnt[i] = 0;
        }
    }
    
    return 0;
}