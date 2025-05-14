/*
Wykonaj polecenia:
a. Utwórz funkcję obliczającą różnicę dwóch liczb zmiennoprzecinkowych.
b. Utwórz odpowiedni wskaźnik na funkcję i przypisz go do funkcji z punktu a)
c. Wywołaj funkcję przez wskaźnik na wybranych wartościach i wypisz wynik
*/

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int comp_float(const void *a, const void *b)
{
    float *ptrA = a;
    float *ptrB = b;
    return *ptrA - *ptrB;
}

int main(int argc, char* argv[])
{
    float tab[10];
    int i;

    for(i=0; i<10; i++)
    {
        tab[i] = rand() % 100000 / 100.0;
        printf("%f\n", tab[i]);
    }

    qsort(tab, 10, sizeof(float), comp_float);

    printf("---------------\n");
    for(i=0; i<10; i++)
    {
        printf("%f\n", tab[i]);
    }

    return 0;
}