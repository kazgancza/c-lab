/*
Użytkownik podaje liczbę n, następnie program losuje 
n liczb z zakresu 0-1000. Jeśli liczba jest z zakresu 250-750, 
zapisz ją do pliku. W przeciwnym wypadku ma zostać 
przekierowana na stderr. 

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(int argc, char* argv[])
{
    srand(time(NULL));
    FILE* file = fopen("05_out.txt", "a");
    int n;
    int i;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        int random_number = rand() % 1001;
        if (random_number >=250 && random_number <= 750)
        {
            fprintf(file, "%d\n", random_number);
        }
        else
        {
            fprintf(stderr,"%d\n", random_number);
        }
    }

    fclose(file);

    return 0;
}