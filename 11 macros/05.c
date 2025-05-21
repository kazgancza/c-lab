#include<stdio.h>

#define SWAP(t, x, y) {t temp=x; x=y; y=temp;}

int main()
{
    int a = 5;
    int b = 6;

    SWAP(int, a, b);

    printf("%d %d\n", a, b);

    return 0;
}

/*
Utwórz makro SWAP(t, x, y), które zamieni miejscami 
wartości zmiennych x i y typu t.  
*/