#include<stdio.h>
#include<stdlib.h>

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