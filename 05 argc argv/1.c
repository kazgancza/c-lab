#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int i;

    for(i=0; i<argc-1; i++)
    {
        printf("Argument nr %d: %s\n", i+1, argv[i+1]);
    }

    return 0;
}
