#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    const int MAX_LINE_LENGTH = 1024;

    FILE* in  = fopen("daty.txt", "r");
    FILE* out = fopen("wynik.txt", "w");
    char line[MAX_LINE_LENGTH];

    while(fgets(line, MAX_LINE_LENGTH, in))
    {
        int line_length = strlen(line);
        int i;
        int counter = 0;

        for(i=0; i<line_length; i++)
        {
            if(line[i] >= '0' && line[i] <= '9')
            {
                counter += 1;
            }
        }

        if(counter % 2 == 0)
        {
            fprintf(out, "%s", line);
        }
    }

    fclose(in);
    fclose(out);
    return 0;
}