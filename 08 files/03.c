#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    char key;
    int keys_count[26] = {0};
    int i;

    while(1)
    {
        key = fgetc(stdin);

        if (key >= 'A' && key <= 'Z') break;

        keys_count[key - 'a'] += 1;

    }

    for(i=0; i<26; i++)
    {
        printf("%c: %d\n", ('a' + i), keys_count[i]);
    }


    return 0;
}

/*
Korzystając z fgetc odczytuj z klawiatury znaki tak długo,
aż użytkownik wprowadzi dowolną wielką literę. 
Wypisz ile razy została wciśnięta każda z małych liter 
(jeśli nie została wciśnięta wcale wypisz dla niej 0). 
*/