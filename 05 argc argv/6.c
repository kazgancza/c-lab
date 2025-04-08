#include<stdio.h>
#include<stdlib.h>

/*
 Zmodyfikuj poprzedni program tak, żeby rysował trójkąt symetryczny względem osi Y. 
*/

int main(int argc, char* argv[])
{
    int i;
    int j;

    for(i=0; i<atoi(argv[1]); i++)
    {
        for(j=atoi(argv[1]); j>=i; j--)
        {
            printf(" ");
        }

        for(j=0; j<=i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}