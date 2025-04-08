#include<stdio.h>

int main()
{
	int n;
	char c;
	int i;

	scanf(" %d", &n);
	scanf(" %c", &c);

	for(i=0; i<n; i++)
	{
		printf("%c", c);
	}
		

	return 0;
}
