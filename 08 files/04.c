#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char* argv[])
{
    char* path = argv[1];
    FILE* file = fopen(path, "r");
    const int MAX_LINE_LENGTH = 1024;
    int letters = 0;
    int words = 0;
    int lines = 0;
    char line[MAX_LINE_LENGTH];

    while(fgets(line, MAX_LINE_LENGTH, file))
    {
        
        int i = 0;
        int line_length = strlen(line);
        int spaces = 0;

        for(i=0; i<line_length; i++)
        {
            if (line[i] != ' ')
            {
                letters += 1;
            }
            else
            {
                while(line[i+1] == ' ')
                {
                    i += 1;
                }
                spaces += 1;

            }
        }

        lines += 1;
        if (spaces)
        {
            words += spaces + 1;
        }
        spaces = 0;
        
    }

    printf("Letters: %d\nWords: %d\nLines: %d\n", letters, words, lines);

    fclose(file);
    return 0;
}