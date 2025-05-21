/*
Napisz funkcję log, która wypisze na ekran wskazany
w argumencie napis, ale tylko wtedy, kiedy zdefiniowana jest
zmienna TEST. W przeciwnym wypadku wywołanie funkcji 
log ma nic nie robić. 
*/

#include<stdio.h>
#define TEST

void log(char* text)
{
    #ifdef TEST
    int i = 0;
    while(text[i] != '\0')
    {
        printf("%c", text[i]);
        i += 1;
    }
    #endif
}



int main()
{
    return 0;
}