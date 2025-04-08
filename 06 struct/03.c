#include<stdio.h>
#include<stdlib.h>

/*
 Tablice w C nie posiadają informacji o swoim rozmiarze. Utwórz strukturę o nazwie Array,
 w której przechowasz wskaźnik na dynamicznie zaalokowaną pamięć oraz rozmiar tablicy.
 a. Napisz funkcję, która przyjmie rozmiar tablicy, a następnie utworzy zmienną typu Array,
 zaalokuje pamięć, ustawi odpowiednio zmienne i zwróci Array.
 b. Napisz funkcję, która przyjmie zmienną typu Array i zwolni pamięć tablicy
 przechowywanej przez strukturę. 
*/

typedef struct
{
    int* ptr;
    int array_size;
} Array;

Array create_array(int array_size)
{
    int *array_ptr = malloc(array_size * sizeof(int));
    Array array;
    array.ptr = array_ptr;

    return array;
}

void delete_array(Array *array)
{
    int *ptr = array->ptr;
    free(array);
    ptr = NULL;
}


int main()
{
    

    return 0;
}