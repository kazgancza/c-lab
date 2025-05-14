/*
Napisz funkcję [F1], która przyjmuje dwa floaty oraz wskaźnik na funkcję. Funkcja f1 oblicza
różnicę parametrów oraz zwraca wynik. Jeśli wynik jest ujemny to przed zwróceniem wartości
wywołuje funkcję przekazaną przez wskaźnik – ta funkcja ma przyjmować dwa floaty i nic nie
zwracać.
Przetestuj F1 do której przekażesz funkcję wypisującą komunikat „Wynik odejmowania A – B
jest ujemny!”, gdzie A i B to argumenty przekazane do funkcji F1.
*/

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

float f1(float a, float b, void (*func)(float, float))
{
    float r = a-b;
    if (r < 0)
    {
        func(a, b);
    }

return r;
}

void func(float a, float b)
{
    printf("Wynik odemowania %f od %f jest ujemny!\n", a ,b);
}

int main()
{
    float a = 1.54;
    float b = 2.555;
    float r = f1(a, b, func);
    printf("%f\n", r);


    return 0;
}