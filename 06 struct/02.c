#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char a;
    int b;
    char c;
} One;

typedef struct
{
    char a;
    char b;
    int c;
} Two;



int main()
{
    One one;
    Two two;

    printf("%ld\n", sizeof(one));   
    printf("%ld\n", sizeof(two));


    return 0;
}