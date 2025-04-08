#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
    int i;
    int sum=0;
    int count=0;

    for(i=1; i<argc; i++)
    {
        int j;

        for(j=0; j<strlen(argv[i]); j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                continue;
            }
            count+=1;
            sum+=atoi(argv[i]);
        }
    }

    if(count==3)
    {
        printf("Suma: %d", sum);
    }
    else
    {
        printf("Ilosc liczb: %d", count);
    }

   


    return 0;
}