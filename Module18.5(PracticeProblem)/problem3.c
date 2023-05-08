#include<stdio.h>

void printNumber(int i, int n){

    if(i > n) return;

    printNumber(i+1, n);

    if(i==1){
        printf("%d", i);
    } else {
        printf("%d ", i);
    }

}

int main ()
{
    int n;
    scanf("%d", &n);

    printNumber(1, n);

    return 0;
}


// input ---> 4