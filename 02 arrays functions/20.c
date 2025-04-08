#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[10][10];
	int i;
	int j;

	srand(time(NULL));
	/* Dodawanie liczb do tablicy */
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			arr[i][j]=rand()%100+1;
		}
	}

	


	return 0;
}
