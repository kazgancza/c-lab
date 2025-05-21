#include<stdio.h>

#define MACRO(type, name, start_value) type name = (start_value)

int main()
{
    MACRO(int, a, 5);

    printf("%d\n", a);

    return 0;

}

/*
Utwórz makro, które przyjmie 3 argumenty, typ, nazwa
 i wartość początkowa i na ich podstawie utworzy 
 zmienną typu typ, o nazwie nazwa i przypisze 
 jej wskazaną wartość. 
*/