#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{
    int i;
    int j;    
    int arr[13][13];
    int north_west=0;
    int south_east=0;

    srand(time(NULL));

    for(i=0; i<13; i++)
    {
        for(j=0; j<13; j++)
        {
            arr[i][j]=rand()%101;

        }
    }

    for(i=0; i<13; i++)
    {
        north_west+=arr[i][i];
    }

    j=12;
    for(i=0; i<13; i++)
    {
        south_east+=arr[i][j];
        j--;
    }

    if(north_west > south_east)
    {
        printf("Glowna przekatna\n");
        return 0;
    }
    if(south_east > north_west)
    {
        printf("Antyprzekatna\n");
        return 0;
    }

    printf("Remis\n");
    return 0;
}