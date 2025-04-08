#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int *ptr=&a;

    printf("%p\n", ptr);
    
    ptr+=1;

    printf("%p\n", ptr);
    

    return 0;
}