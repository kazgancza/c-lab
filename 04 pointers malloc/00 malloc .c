#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = malloc(1000*sizeof(int)); 

    ptr[523]=543254;

    free(ptr); /* Zwalnianie pamięci */
    ptr=NULL;  /* Usuwanie wskaźnika */
    
    return 0;
}
