//Has Return + Parameter

#include<stdio.h>

int add(int a, int b){
    int sum = a+b;
    return sum;
}

int main ()
{

    int x, y;
    scanf("%d %d", &x, &y);

    int result = add(x, y);

    printf("%d\n", result);

    return 0;
}





//Has Return + No Parameter

#include<stdio.h>

int subtraction(void){

    int x, y;
    scanf("%d %d", &x, &y);

    int sub = x-y;

    return sub;
}

int main ()
{
    int result = subtraction();

    printf("%d\n", result);

    return 0;
}




// No Return + Parameter

#include<stdio.h>

void dot(int a, int b){
    
    int result = a*b;
    printf("%d\n", result);

    return;
}

int main ()
{

    int x, y;
    scanf("%d %d", &x, &y);

    dot(x, y);

    return 0;
}



// No Return + No Parameter

#include<stdio.h>

void reminder(void){
    
    int x, y;
    scanf("%d %d", &x, &y);

    int result = x%y;
    printf("%d\n", result);

    return;
}

int main ()
{

    reminder();

    return 0;
}

