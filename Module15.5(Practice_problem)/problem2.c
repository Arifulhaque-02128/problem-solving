#include<stdio.h>


int my_len(char *st){

    int cnt = 0;

    int i=0;
    while (st[i])
    {
        cnt++;
        i++;
    }

    return cnt;
    
}

int main ()
{
    char st[20];
    scanf("%s", st);

    int length = my_len(st);

    printf("%d", length);

    return 0;
}