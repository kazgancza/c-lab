#include<stdio.h>

int is_magic(int **arr, int n)
{
	int width=0;
	int temp;
	int i;
	int j;

	for(i=0; i<n; i++)
	{
		width+=arr[i][i];
	}
	for(i=1; i<n; i++)
	{
		temp=0;
		for(j=0; j<n; j++)
		{
			temp+=arr[i][j];	
		}
		if(temp!=width) return 0;
	}

}

int main()
{
	int arr[10][10]={0};
		

	return 0;
}
