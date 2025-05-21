#include<stdio.h>

#include "macros.h"

int main()
{
    printf("Pi: %f\n", PI);
    printf("Circle area (r=5): %f\n", CIRCLEAREA(5));
    printf("Rectangle area (5x4): %d\n", RECTANGLEAREA(5, 4));

    return 0;
}

/*
Utwórz plik makra.h zawierający poniższe makra, 
a następnie dołącz go do głównego kodu programu dyrektywą 
include:
 a. PI przechowującego wartość liczby pi 
 b. Makra obliczającego pole koła na podstawie 
 przekazanego promienia 
 c. Makra obliczającego pole prostokąta 
 na podstawie przekazanych argumentów W main 
 przetestuj działanie makr. 
*/