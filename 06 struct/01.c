#include<stdio.h>
#include<stdlib.h>

/*
Utwórz strukturę reprezentującą prostokąt.
a. Napisz funkcję, która obliczy i zwróci jego pole powierzchni. 
*/

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