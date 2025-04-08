/*
Utwórz większą (na przykład 100+ elementową) tablicę losowych liczb,
a nastepnie znajdź w niej najdłuższy rosnący podciąg.
Na przykład, dla tablicy {2, 11, 3, 5,  7, 13, 8, 19, 17, 23},
najdłuższy rosnący podciąg to {3, 5, 7, 13}. 
*/

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i;
    int arr[100];
    int low_streak=0;
    int high_streak=0;
    int low_pos=0;
    int high_pos=0;

    srand(time(NULL));

    for(i=0; i<100; i++)
    {
        arr[i]=rand()%100+1;
    }

    for(i=1; i<100; i++)
    {
        if(arr[i]>arr[i-1])
        {
            low_streak+=1
        }
        else
        {

        }
    }

    return 0;
}
