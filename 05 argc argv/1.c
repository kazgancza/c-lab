#include<stdio.h>
#include<stdlib.h>

/*
Napisz program, który wypisze wszystkie argumenty, które przekazał użytkownik w postaci:
”Argument numer X: Tekst”, gdzie X jest numerem argumentu, a Tekst jest przekazanym napisem 
*/

int main(int argc, char* argv[])
{
    int i;

    for(i=0; i<argc-1; i++)
    {
        printf("Argument nr %d: %s\n", i+1, argv[i+1]);
    }

    return 0;
}
