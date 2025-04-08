#include<stdio.h>
#include<stdlib.h>

/*
 Napisz funkcję, która nic nie zwraca, przyjmuje dwa argumenty i zamienia ich wartości,
 także poza funkcją. 
*/

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=10;
    int b=20;

    printf("%d, %d\n", a, b);
    
    swap(&a, &b);

    printf("%d, %d\n", a, b);

    return 0;
}