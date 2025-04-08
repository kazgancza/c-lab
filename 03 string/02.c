#include<stdio.h>

/*
Poniższe zadania zrealizuj bez korzystania z funkcji pracujących na napisach 
(z nagłówka <string.h>), bo ich implementacja jest częścią zadania.
Przetestuj swoje funkcje.
a. Napisz funkcję zwracającą długość przekazanego napisu (jak strlen).
b. Napisz funkcję kopiującą napis do przekazanego bufora (jak strcpy).
c. Napisz funkcję łączącą dwa napisy (jak strcat).
d. Napisz funkcję porównującą napisy zwracającą 1 jeśli napisy są różne,
albo 0 jeśli są takie same (podobnie do strcmp).
e. Zmodyfikuj swoją funkcję porównującą tak, żeby działała jak strcmp z biblioteki C.
To znaczy, że ma zwracać liczbę ujemną jeśli pierwszy napis jest mniejszy (leksykalnie),
0 jak są równe, a liczbę dodatnią jeśli jest większy.
f. Napisz funkcję zmieniającą wielkie litery na małe
g. Napisz funkcję przyjmującą napis i znak, która zwraca indeks pierwszego wystąpieni
danego znaku. Zwróć -1 jeśli znak nie znajduje się w zdaniu (podobnie do strchr). 
*/

int slen(char *text)
{
    int len=0;
    while(1)
    {
        if(text[len]==0)
        {
            return len;
        }
        len+=1;
    }
}

char scpy(char *dest, const char *src)
{
    int i;
    for(i=0; i<slen(src)+1; i++)
    {
        dest[i]=src[i];
    }

    return dest;
}

char scat(char *dest, const char *src)
{
    int i;
    int j=0;
    for(i=slen(dest); i<slen(dest)+slen(src)+1; i++)
    {
        dest[i]=src[j];
        j++;
    }

    return dest;
}

int scmp(char *left, char *right)
{
    int i;
    int n;
    
    if(slen(left)>slen(right))
    {
        n=slen(left);
    }
    else
    {
        n=slen(right);
    }

    for(i=0; i<n; i++)
    {
        if(left[i]>right[i])
        {
            return 1;
        }
        if(left[i]<right[i])
        {
            return -1;
        }
    }

    return 0;
}

int main()
{
    char t1[100]="Tekst";
    char t2[59];
    
    printf("slen: %d\n", slen(t1));

    scpy(t2, t1);
    printf("scpy: %s\n", t2);

    scat(t1, t2);
    printf("scat: %s\n", t1);

    printf("%d\n", scmp(t1, t2));

    return 0;
}