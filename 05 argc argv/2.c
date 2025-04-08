#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    int max=1;

    for(i=2; i<argc; i++)
    {
        if(atoi(argv[max])<atoi(argv[i]))
        {
            max=i;
        }
    }

    printf("Max: %d\n", atoi(argv[max]));

    return 0;
}