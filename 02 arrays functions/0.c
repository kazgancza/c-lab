#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[4][6];
	int i;
	int j;

	int c=0;
	
	for(j=0; j<4; j++)
	{
		for(i=0; i<6; i++)
		{
			arr[j][i]=c;
			c+=2;
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
