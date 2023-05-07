#include<stdio.h>

int wordLength(char word[], int i){

    if(! word[i]) return 0;

    int len = wordLength(word, i+1);

    return len + 1;

}

int main ()
{
    char word[20];
    scanf("%s", word);

    int len = wordLength(word, 0);

    printf("Length : %d", len);

    return 0;
}


// input ---> ariful 