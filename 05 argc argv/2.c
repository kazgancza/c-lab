#include<stdio.h>
#include<stdlib.h>

/*
 Poproś użytkownika o podanie wartości n.
 Następnie wczytaj n liczb i znajdź największą z nich. Załóżmy, że n >= 1; 
*/

int main(int argc, char* argv[])
{
    int i;
    int max=1;

    for(i=2; i<argc; i++)
    {
        if(atoi(argv[max])<atoi(argv[i]))
        {
            max=i;
        }
    }

    printf("Max: %d\n", atoi(argv[max]));

    return 0;
}