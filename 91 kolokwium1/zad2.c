#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void fill_even_nums(int *arr, int n)
{
    int i;
    int even = 0;
    
    for(i=0; i<n; i++)
    {
        arr[i] = even;
        even += 2;
    }
}

int main(int argc, char* argv[])
{
    int i;

    if (argc != 4)
    {
        printf("Bledna ilosc argumentow\n");
        return 1;
    }

    for(i=1; i<4; i++)
    {
        int j;

        for(j=0; j<strlen(argv[i]); j++)
        {
            if(argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Jeden z argumentow nie jest liczba dodatnia\n");
                return 2;
            }
        }
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    int n = a+b-c;

    if((n)<=0)
    {
        printf("Nie da sie utworzyc tablicy o ujemnej ilosci\n");
        return 3;
    }

    int *ptr = (int*)malloc(n*sizeof(int));

    fill_even_nums(ptr, n);

    for(i=0; i<n; i++)
    {
        printf("%d\n", ptr[i]);
    }




    free(ptr);
    ptr = NULL;
    return 0;
}
