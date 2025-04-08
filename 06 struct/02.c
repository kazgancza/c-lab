#include<stdio.h>
#include<stdlib.h>

/*
 Utwórz strukturę zawierającą pola danych typów (dokładnie w tej kolejności):
 - char int char - char char int Wyświetl i wypisz rozmiar tych zmiennych.
 Zinterpretuj wyniki. 
*/

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