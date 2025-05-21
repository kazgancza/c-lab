#include<stdio.h>

#include "macros.h"

int main()
{
    printf("Pi: %f\n", PI);
    printf("Circle area (r=5): %f\n", CIRCLEAREA(5));
    printf("Rectangle area (5x4): %d\n", RECTANGLEAREA(5, 4));

    return 0;
}