#include<stdio.h>
#include<string.h>

int is_palindrome(char *seq){

    char orginal_seq[10];
    char reverse_seq[10];

    int len = strlen(seq);

    int result = 1;
    
    for (int i = 0; i <= len; i++)
    {
        if (i==len)
        {
            reverse_seq[i] = '\0';
            orginal_seq[i] = '\0';
        } else {
            orginal_seq[i] = seq[i];
            reverse_seq[i] = seq[len-i-1];
        }
        
    }

    for (int i = 0; i < len; i++)
    {
        if (orginal_seq[i] != reverse_seq[i])
        {
            result = 0;
            break;
        }
        
    }

    return result;
}

int main ()
{
    char seq[10];
    scanf("%s", &seq);
    
    int result = is_palindrome(seq);

    if (result == 1)
    {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
    

}