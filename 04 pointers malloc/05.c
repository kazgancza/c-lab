#include<stdio.h>
#include<stdlib.h>

/*
Napisz funkcję, która dynamicznie utworzy tablicę intów i ustawi wartość wszystkich
jej elementów na pewną wartość. Rozmiar tablicy i wartość początkowa mają być
przekazane jako parametry funkcji. Funkcja ma zwrócić wskaźnik na tablicę.
*/

int *create_table(int tab_size, int start_value)
{
    int *ptr = malloc(tab_size*sizeof(int));
    int i;

    for(i=0; i<tab_size; i++)
    {
        ptr[i]=start_value;
    }

    return ptr;

}

void *delete_table(int *ptr)
{
    free(ptr);
    *ptr = NULL;
}

int main()
{
    int size;
    int value;
    int *tab;
    int i;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &size);
    printf("Podaj wartosc: ");
    scanf("%d", &value);

    tab = create_table(size, value);

    for(i=0; i<size; i++)
    {
        printf("%d, ", tab[i]);
    }

    delete_table(tab);



    return 0;
}