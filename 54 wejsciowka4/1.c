#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *generate_tab(int *size)
{
    srand(time(NULL));
    int rand_size=(rand()%1000)+1;
    int *ptr = (int*)malloc(rand_size*sizeof(int));
    int i;

    for(i=0; i<rand_size; i++)
    {
        ptr[i]=(rand()%1000)+1;
    }

    *size = rand_size;

    return ptr;
}

void delete_tab(int *ptr)
{
    free(ptr);
    ptr=NULL;
}

int main()
{
    int i;
    int size;
    int *ptr = generate_tab(size);
    
    for(i=0; i<size; i++)
    {
        printf("%d\n", ptr[i]);
    }

    delete_tab(ptr);


    return 0;
}