#include<stdio.h>

int vowelCount(char s[], int i){

    if(!s[i]) return 0;

    if (s[i] >= 65 && s[i] <= 92)
    {
        s[i] = s[i] + 32;
    }
    

    int count = vowelCount(s, i+1);

    if (s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117){
        return count+1;
    } else {
        return count;
    }
    
}

int main ()
{
    char s[250];
    fgets(s, 250, stdin);
    
    int cnt = vowelCount(s,0);

    printf("%d\n", cnt);

    return 0;
}


// input -----> beautiful Bangladesh I love u