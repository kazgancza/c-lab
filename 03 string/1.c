#include<stdio.h>
#include<string.h>

int main()
{
    char *text="Tekst";
    int i;

    for(i=0; i<strlen(text); i++)
    {
        printf("%c: %ld\n", text[i], text[i]+'0');
    }

    return 0;
}