/*

Napisz funkcję kalkulator, która przyjmuje dwie liczby i wskaźnik na funkcję. Kalkulator ma
wykonywać przekazaną funkcję na przekazanych liczbach i zwrócić wynik.
a. Utwórz funkcję reprezentującą na przykład dodawanie i mnożenie, które będzie
można przekazać do kalkulatora.
b. Napisz program tak, żeby liczby i operacje dało się przekazać jako argumenty do
programu. Następnie na podstawie argumentów odpowiednio wywołaj funkcję
kalkulator.
Przykłady:
./program 10 20 x wypisuje na ekran 200
./program 5 3 + wypisuje na ekran 8
W obu przypadkach została wywołana funkcja kalkulator, a symbole + i x pozwalają
wybrać programowi, którą funkcję należy przekazać jako argument.

*/

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int calc(int a, int b, int (*func)(int, int))
{
    return func(a, b);
}

int add(int a, int b)
{
    return a+b;
}

int times(int a, int b)
{
    return a*b;
}


int main(int argc, char* argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    char c = argv[3][0];

    if (c == 'x')
    {
        printf("%d\n", calc(a, b, times));
    }
    if (c == '+')
    {
        printf("%d\n", calc(a, b, add));
    }

    return 0;
}