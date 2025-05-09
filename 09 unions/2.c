/*
Utwórz strukturę z polami takimi jak w 1. i porównaj 
sizeof() unii i struktury z tymi polami. 
*/

#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>

typedef union
{
    int i;
    float f;
    char c;
} Europe;

typedef struct 
{
    int i;
    float f;
    char c;
} America;


int main(int argc, char* argv[])
{
    Europe europe;
    America america;

    printf("Sizeof(union): %d\n", sizeof(europe));
    printf("Sizeof(struct): %d\n", sizeof(america));
    
    
    return 0;
}