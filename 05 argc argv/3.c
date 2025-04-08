#include<stdio.h>
#include<stdlib.h>

/*
Napisz kalkulator, który na podstawie przekazanych argumentów,
będzie potrafił wykonać pewne obliczenia. Program ma przyjmować trzy argumenty w postaci:
a op b, gdzie a i b to liczby zmiennoprzecinkowe, a op to operator (+, x, /). 
program wypisuje na ekran wynik operacji. Program ma obsługiwać błędną ilość argumentów,
błędne operatory i dzielenie przez 0. 
*/

int main(int argc, char* argv[])
{
    if(argc!=4)
    {
        printf("Bledna ilosc argumentow\n");
        return -1;
    }

    float a = atof(argv[1]);
    char operation = argv[2][0];
    float b = atof(argv[3]);

    if(operation!='+' && operation!='x' && operation!='/')
    {
        printf("Bledna operacja\n");
        return -2;
    }

    if(operation=='+')
    {
        printf("Wynik: %f\n", a+b);
        return 0;
    }

    if(operation=='x')
    {
        printf("Wynik: %f\n", a*b);
        return 0;
    }

    if(b==0)
    {
        printf("Blad dzielenia przez 0\n");
        return -3;
    }

    if(operation=='/')
    {
        printf("Wynik: %f\n", a/b);
    }

    

    
    return 0;
}