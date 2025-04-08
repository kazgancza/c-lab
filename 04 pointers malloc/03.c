#include<stdio.h>
#include<stdlib.h>

/*
Wykonaj polecenia:
a. Utwórz zmienną typu int. 
b. Utwórz odpowiedni wskaźnik i przpisz mu adres utworzonej zmiennej. 
c. Wypisz adres (nie wartość), na który wskazuje wskaźnik.
d. Zwiększ zmienną wskaźnikową o 1
e. Ponownie wypisz adres, na który wskazuje. O ile zmieniła się jego wartość? 
*/

int main()
{
    int a;
    int *ptr=&a;

    printf("%p\n", ptr);
    
    ptr+=1;

    printf("%p\n", ptr);
    

    return 0;
}