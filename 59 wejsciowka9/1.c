#include<stdio.h>

int F(int a, int (*func)(int))
{
    return func(a);
}

int square(int x)
{
    return x*x;
}

int main(int argc, char* argv[])
{
    int a = 4;
    printf("%d\n", F(a, square));

    return 0;
}