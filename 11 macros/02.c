/*
Utwórz makro, które zwróci mniejszy z dwóch przekazanych 
argumentów.
*/

#include<stdio.h>

#define MIN(a, b) (a < b ? a : b)

int main()
{
    int a = 5;
    int b = 6;
    printf("%d\n", MIN(a, b));

    return 0;
}