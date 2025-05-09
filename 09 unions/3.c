/*
Utwórz: 

a. Unię przechowującą int, float i tablicę 2 charów. 

b. Enum mówiący o tym, jakiego typu zmienna jest aktywna 

c. Strukturę zawierającą utworzoną unię i enum.  

d. Funkcję, która przyjmie strukturę (c.) 
i wydrukuje odpowiednią wartość unii w zależności 
od wartości enuma Przetestuj działanie funkcji w main. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef union
{
    int i;
    float f;
    char tab[2];
}U;

typedef enum
{
    _int,
    _float,
    _char
} E;

typedef struct
{
    U u;
    E e;
} S;

void func(S s)
{
    if (s.e == _int)
    {
        printf("%d\n", s.u.i);
    }
    if (s.e == _float)
    {
        printf("%f\n", s.u.f);
    }
    if (s.e == _char)
    {
        printf("%c%c\n", s.u.tab[0], s.u.tab[1]);
    }
}

int main(int argc, char* argv[])
{
    S test;

    test.u.f = 1.125;
    test.e = _float;

    func(test);


    return 0;
}