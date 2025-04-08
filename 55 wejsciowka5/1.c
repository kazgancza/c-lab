#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    int i;

    if (argc != 4)
    {
        printf("Ilosc argumentow: %d", argc-1);

        return 0;
    }

    for(i=1; i<=3; i++)
    {
        int j;

        for(j=0; j<strlen(argv[i]); j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Ilosc agrumentow: %d", argc-1);

                return 0;
            }
        }
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    printf("Suma: %d", a+b+c);


    return 0;
}