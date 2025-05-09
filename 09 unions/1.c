/*
Utwórz unię zawierającą typy int, float i char.  
W main przypisz do kolejnych typów wybraną wartość. 
Po przypisaniu jednej wartości wypisz wszystkie na ekran. 
*/

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>

typedef union
{
    int i;
    float f;
    char c;
} Europe;

int main(int argc, char* argv[])
{
    Europe europe;
    europe.i = 10;
    printf("%d %f %c\n", europe.i, europe.f, europe.c);
    europe.f = 1.1254;
    printf("%d %f %c\n", europe.i, europe.f, europe.c);
    europe.c = 'a';
    printf("%d %f %c\n", europe.i, europe.f, europe.c);



    return 0;
}