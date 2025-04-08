/*
Utwórz dwuwymiarową tablicę char’ów o rozmiarze 10x10.
Wypełnij ją znakami # i _ tak, żeby po wypisaniu na konsolę utworzyły one wzór szachownicy:
_#_#_#_#_#_#_#
#_#_#_#_#_#_#_
_#_#_#_#_#_#_#
....  
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	char tab[10][10];
	int i;
	int j;

	for(j=0; j<10; j++)
	{
		for(i=0; i<10; i++)
		{
			if((i+j)%2==0)
			{
				tab[i][j]='_';
			}
			else
			{
				tab[i][j]='#';
			}
			printf("%c", tab[i][j]);
		}
		printf("\n");
	}

	return 0;
}
