#include<stdio.h>


int fib(int i)
{
	if(i==1) return 1;
	if(i==2) return 1;
	return fib(i-1)+fib(i-2);
}

int factorial(int i)
{
	if(i==0) return 1;
	return i*factorial(i-1);
}

int main()
{
	printf("%d\n", fib(5));
	printf("%d\n", factorial(5));

	return 0;
}
