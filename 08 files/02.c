#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    char* file_path = argv[1];
    const int MAX_LINE_LENGTH = 256;

    FILE* file = fopen(file_path, "r");
    
    char line[MAX_LINE_LENGTH];

    while(fgets(line, MAX_LINE_LENGTH, file))
    {
        fputs(line, stdout);
    }


    fclose(file);
    return 0;
}

/*
Napisz program, który będzie działał tak jak polecenie cat.
Jako argument przyjmij nazwę pliku, który chcesz wypisać, 
następnie korzystając z poleceń fgets odczytaj wiersze w pliku, 
a za pomocą fputs wypisz je na ekran. 
*/