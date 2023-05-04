// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include<stdio.h>

int add(int x, int y){
    int sum = x + y;

    return sum;
}

int main ()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = add(x, y);
    printf("%d\n", sum);


    return 0;
}


// input ---> 5 2


