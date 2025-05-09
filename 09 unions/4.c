/*
Utwórz unię, którą łatwo będzie można odczytać wartość 
i-tego bajtu zmiennej typu float. 
Zaprezentuj jej działanie w funkcji main. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union
{
    float value;
    unsigned char byte[sizeof(float)];

} Float_byte;


int main(int argc, char* argv[])
{
    Float_byte f;
    f.value = 1.125;

    printf("%d", f.byte[3]);

    return 0;
}