#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int a;
    int b;
} Rectangle;

int rectangle_area(Rectangle *rectangle)
{
    int a = rectangle->a;
    int b = rectangle->b;

    return a*b;
}

int main()
{
    Rectangle white_rectangle;
    white_rectangle.a = 5;
    white_rectangle.b = 6;

    printf("%d\n", rectangle_area(&white_rectangle));

    return 0;
}