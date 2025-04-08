#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    int j;

    for(i=0; i<atoi(argv[1]); i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}