#include<stdio.h>
#include<math.h>
#include<stdlib.h> // for abs()

int main ()
{

    // ceil, floor and round ---> they all input as (double) and give output as (integer)
    double x;
    scanf("%lf", &x);

    int ceil_value = ceil(x);
    int floor_value = floor(x);
    int round_value = round(x);

    printf("ceil value of %0.2lf ---> %d\n", x, ceil_value);
    printf("floor value of %0.2lf ---> %d\n", x, floor_value);
    printf("round value of %0.2lf ---> %d\n", x, round_value);


    // square root --> input hisebe int and double 2 type er data e deya jay.

    int a;
    scanf("%d",  &a);
    
    int squareRoot_value = sqrt(a); // square root hisebe integer type data store korbe
    double squareRoot = sqrt(a); // square root kore double type er variable store kore rakhbe

    printf("square root (int) of %d ---> %d\n",a, squareRoot_value); // integer output dibe
    printf("square root (float) of %d ---> %.2lf\n",a, squareRoot); // doshomiker por 2 ghor dibe

    // power --> b to the power c ---> input hisebe int and double 2 type er data e deya jay.

    int b, c;
    scanf("%d %d", &b, &c);

    int value = pow(5, 2);

    printf("%d to the power %d = %d\n", b, c, value);

    //absolute value ----> always return positive value

    int n;
    scanf("%d", &n);

    int abs_value = abs(n);

    printf("absolute value of %d = %d\n", n, abs_value);

    return 0;
}

// input ---> 
// 3.455
// 21
// 5 2
// -5