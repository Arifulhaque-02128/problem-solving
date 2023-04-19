#include<stdio.h>
#include<string.h>

int main ()
{
    char string1[100], string2[100], concated[200];

    scanf("%s %s", string1, string2);

    for (int i = 0; i < strlen(string1); i++)
    {
        concated[i] = string1[i];
    }

    for (int i = 0; i <= strlen(string2); i++)
    {
        concated[strlen(string1) + i] = string2[i];
    }

    printf("%s", concated);
    
    
    return 0;
}