/*
Utwórz tablicę losowych liczb i posortuj ją rosnąco
i malejąco korzystając z funkcji qsort
*/

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
int comp_float_inc(const void *a, const void *b)
{
    float *ptrA = a;
    float *ptrB = b;
    return *ptrA - *ptrB;
}


int comp_float_desc(const void *a, const void *b)
{
    float *ptrA = a;
    float *ptrB = b;
    return *ptrB - *ptrA;
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

    qsort(tab, 10, sizeof(float), comp_float_inc);

    printf("---------------\n");
    for(i=0; i<10; i++)
    {
        printf("%f\n", tab[i]);
    }

    qsort(tab, 10, sizeof(float), comp_float_desc);

    printf("---------------\n");
    for(i=0; i<10; i++)
    {
        printf("%f\n", tab[i]);
    }


    return 0;
}