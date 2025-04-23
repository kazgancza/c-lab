#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    FILE *file1 = fopen("01_in.txt", "r");
    FILE *file2 = fopen("01_out.txt", "a");

    char text[1024] = {0};
    fread(text, sizeof(char), 1024, file1);

    int i = 0;
    while(text[i] != '\0')
    {
        if ((text[i] == 'X') || (text[i] == 'x'))
        {
            fputc('-', file2);
        }
        else
        {
            fputc(text[i], file2);
        }
        i += 1;
    }

    fclose(file1);
    fclose(file2);


    return 0;
}

/*
Odczytaj plik za pomocą funkcji fread,
zmień wszystkie wystąpienia liter ‘x’ i ‘X’ na znak -,
a następnie zmieniony tekst zapisz do innego, nowego pliku. 
*/