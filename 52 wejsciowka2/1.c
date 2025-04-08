#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void wejsciowka(int *arr)
{
	int i;

	for(i=0; i<sizeof(arr); i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ", arr[i]);
		}
	}
}

int main()
{
	int j;
	int tab[10];

	srand(time(NULL));

	for(j=0; j<10; j++)
	{
		tab[j]=rand()%100+1;
	}

	wejsciowka(tab);

	return 0;
}
