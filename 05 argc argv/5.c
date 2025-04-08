#include<stdio.h>
#include<stdlib.h>

/*
Napisz program, który przyjmie argument będący liczbą,
a następnie narysuje trójkąt prostokątny o wprowadzonym rozmiarze. 
*/

int main(int argc, char* argv[])
{
    int i;
    int j;

    for(i=0; i<atoi(argv[1]); i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}