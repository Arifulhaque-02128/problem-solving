#include<stdio.h>
#include<string.h>

int main ()
{
    char s[1001];
    scanf("%s", s);

    int cntSmall = 0, cntCapital = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] <= 90 && s[i] >= 65)
        {
            cntCapital++;
        }
        else if (s[i] <= 122 && s[i] >= 97)
        {
            cntSmall++;
        }
    }

    printf("%d %d\n", cntCapital, cntSmall);
    
    return 0;
}