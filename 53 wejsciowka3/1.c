#include<stdio.h>
#include<string.h>

int last_letter(char *text, char letter)
{
    int i;

    for(i=strlen(text)-1; i>=0; i--)
    {
        if(text[i]==letter)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    char text[100]="tekst";
    printf("%d\n", last_letter(text, 's'));
    printf("%d\n", last_letter(text, 't'));
    printf("%d\n", last_letter(text, 'q'));
    return 0;
}