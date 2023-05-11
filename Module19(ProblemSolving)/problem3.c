#include<stdio.h>

void printDigit(int val){

    if(val == 0) return;

    int rem = val%10;
    int quotient = val/10;

    printDigit(quotient);

    printf("%d ", rem);

}

int main ()
{
    int n;
    scanf("%d", &n);
    int testVal;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &testVal);
        printDigit(testVal);
        if (testVal == 0)
        {
            printf("0");
        }
        
        printf("\n");
    }
    
    
    return 0;
}

// input ----> 3
// 121
// 39
// 123456