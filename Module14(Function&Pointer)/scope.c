#include<stdio.h>
#include<math.h>

double pie = 3.1416; // pie ----> global variable ---> can be accessed from whole program.


// circleArea double type er data return korbe tai ----> double
double circleArea(int radius){

    double area = (pie*pow(radius, 2)*1.0); // area ---> local variable ---> can be accessed only from the circleArea function.

    return area;
}

int main ()
{
    int r;
    scanf("%d", &r);

    double area = circleArea(r); // circleArea double type er data return korbe tai area varible  ----> double

    printf("Area of the circle is %.2lf for radius %d", area, r);


    return 0;
}


//input ----> 5