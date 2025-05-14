#include<stdio.h>
#include<stdlib.h>

typedef union
{
    char c;
    int i;
    long l;
} U;

typedef struct
{
    U u;
    char last;
} S;


int main()
{
    S one;
    one.u.c = 'A';
    one.last = 'c';

    one.u.i = 15;
    one.last = 'i';

    one.u.l = 115555;
    one.last = 'l';

    if (one.last == 'c')
    {
        printf("Char: %c\n", one.u.c);
    }
    else if (one.last == 'i')
    {
        printf("Int: %d\n", one.u.i);
    }
    else
    {
        printf("Long: %ld\n", one.u.l);
    }



    return 0;
}